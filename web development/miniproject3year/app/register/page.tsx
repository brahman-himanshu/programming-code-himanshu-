"use client";

import { useState, type FormEvent } from "react";
import Link from "next/link";
import {
  AlertCircle,
  CheckCircle2,
  Lock,
  Phone,
  User,
} from "lucide-react";
import AuthCard from "@/components/AuthCard";
import Button from "@/components/Button";
import Footer from "@/components/Footer";
import InputField from "@/components/InputField";
import Navbar from "@/components/Navbar";
import { getPasswordStrength, validateMobileNumber } from "@/lib/validation";

export default function RegisterPage() {
  const [fullName, setFullName] = useState("");
  const [mobile, setMobile] = useState("");
  const [password, setPassword] = useState("");
  const [confirmPassword, setConfirmPassword] = useState("");
  const [errorMessage, setErrorMessage] = useState("");
  const [successMessage, setSuccessMessage] = useState("");
  const [isLoading, setIsLoading] = useState(false);
  const [touched, setTouched] = useState({
    mobile: false,
    password: false,
    confirmPassword: false,
  });

  const mobileValidation = validateMobileNumber(mobile);
  const passwordStrength = getPasswordStrength(password);
  const passwordsMatch =
    confirmPassword.length > 0 && password === confirmPassword;

  const handleSubmit = (e: FormEvent) => {
    e.preventDefault();
    setErrorMessage("");
    setSuccessMessage("");

    if (!fullName.trim()) {
      setErrorMessage("Please enter your full name.");
      return;
    }

    if (!mobileValidation.isValid) {
      setErrorMessage(mobileValidation.message);
      return;
    }

    if (passwordStrength.strength === "weak") {
      setErrorMessage("Please choose a stronger password.");
      return;
    }

    if (password !== confirmPassword) {
      setErrorMessage("Passwords do not match.");
      return;
    }

    setIsLoading(true);
    setTimeout(() => {
      setIsLoading(false);
      setSuccessMessage(
        "Account created successfully! Redirecting to login..."
      );
    }, 1500);
  };

  return (
    <>
      <Navbar />
      <main className="flex flex-1 items-center justify-center px-4 py-12 sm:py-16">
        <div className="absolute inset-0 -z-10 overflow-hidden">
          <div className="absolute -left-32 top-20 h-72 w-72 rounded-full bg-green-200/30 blur-3xl" />
          <div className="absolute -right-32 bottom-20 h-72 w-72 rounded-full bg-emerald-200/30 blur-3xl" />
        </div>

        <AuthCard
          title="Create Account"
          subtitle="Join Customer Portal and manage your services effortlessly"
        >
          {errorMessage && (
            <div className="mb-5 flex items-start gap-2.5 rounded-xl border border-red-100 bg-red-50 px-4 py-3 text-sm text-red-600">
              <AlertCircle size={18} className="mt-0.5 shrink-0" />
              <span>{errorMessage}</span>
            </div>
          )}

          {successMessage && (
            <div className="mb-5 flex items-start gap-2.5 rounded-xl border border-green-100 bg-green-50 px-4 py-3 text-sm text-green-700">
              <CheckCircle2 size={18} className="mt-0.5 shrink-0" />
              <span>{successMessage}</span>
            </div>
          )}

          <form onSubmit={handleSubmit} className="space-y-5">
            <InputField
              label="Full Name"
              placeholder="Enter your full name"
              value={fullName}
              onChange={(e) => setFullName(e.target.value)}
              icon={<User size={18} />}
              autoComplete="name"
            />

            <div>
              <InputField
                label="Mobile Number"
                type="tel"
                placeholder="10-digit mobile number"
                value={mobile}
                onChange={(e) => setMobile(e.target.value)}
                onBlur={() => setTouched((t) => ({ ...t, mobile: true }))}
                icon={<Phone size={18} />}
                maxLength={10}
                autoComplete="tel"
                error={
                  touched.mobile && mobile.length > 0 && !mobileValidation.isValid
                    ? mobileValidation.message
                    : undefined
                }
              />
              {mobile.length > 0 && (
                <div
                  className={`mt-2 flex items-center gap-1.5 text-xs font-medium transition-colors ${
                    mobileValidation.isValid ? "text-green-600" : "text-amber-600"
                  }`}
                >
                  {mobileValidation.isValid ? (
                    <CheckCircle2 size={14} />
                  ) : (
                    <AlertCircle size={14} />
                  )}
                  {mobileValidation.message}
                </div>
              )}
            </div>

            <div>
              <InputField
                label="Password"
                type="password"
                placeholder="Create a strong password"
                value={password}
                onChange={(e) => setPassword(e.target.value)}
                onBlur={() => setTouched((t) => ({ ...t, password: true }))}
                icon={<Lock size={18} />}
                showPasswordToggle
                autoComplete="new-password"
              />
              {password.length > 0 && (
                <div className="mt-2.5 space-y-2">
                  <div className="flex items-center justify-between text-xs">
                    <span className="text-slate-500">Password strength</span>
                    <span
                      className={`font-semibold ${
                        passwordStrength.strength === "weak"
                          ? "text-red-500"
                          : passwordStrength.strength === "fair"
                            ? "text-amber-500"
                            : "text-green-600"
                      }`}
                    >
                      {passwordStrength.label}
                    </span>
                  </div>
                  <div className="flex gap-1">
                    {[25, 50, 75, 100].map((threshold) => (
                      <div
                        key={threshold}
                        className={`h-1.5 flex-1 rounded-full transition-all duration-300 ${
                          passwordStrength.score >= threshold
                            ? passwordStrength.color
                            : "bg-slate-100"
                        }`}
                      />
                    ))}
                  </div>
                </div>
              )}
            </div>

            <InputField
              label="Confirm Password"
              type="password"
              placeholder="Re-enter your password"
              value={confirmPassword}
              onChange={(e) => setConfirmPassword(e.target.value)}
              onBlur={() =>
                setTouched((t) => ({ ...t, confirmPassword: true }))
              }
              icon={<Lock size={18} />}
              showPasswordToggle
              autoComplete="new-password"
              error={
                touched.confirmPassword &&
                confirmPassword.length > 0 &&
                !passwordsMatch
                  ? "Passwords do not match"
                  : undefined
              }
            />

            <Button type="submit" fullWidth isLoading={isLoading}>
              Create Account
            </Button>
          </form>

          <p className="mt-6 text-center text-sm text-slate-500">
            Already have an account?{" "}
            <Link
              href="/login"
              className="font-semibold text-green-600 transition-colors hover:text-green-700"
            >
              Sign in
            </Link>
          </p>
        </AuthCard>
      </main>
      <Footer />
    </>
  );
}
