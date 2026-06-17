"use client";

import { useState, type FormEvent } from "react";
import Link from "next/link";
import {
  AlertCircle,
  CheckCircle2,
  Headphones,
  Lock,
  Phone,
  Shield,
  Sparkles,
  Zap,
} from "lucide-react";
import AuthCard from "@/components/AuthCard";
import Button from "@/components/Button";
import Footer from "@/components/Footer";
import InputField from "@/components/InputField";
import Navbar from "@/components/Navbar";
import { validateMobileNumber } from "@/lib/validation";

export default function LoginPage() {
  const [mobile, setMobile] = useState("");
  const [password, setPassword] = useState("");
  const [errorMessage, setErrorMessage] = useState("");
  const [successMessage, setSuccessMessage] = useState("");
  const [isLoading, setIsLoading] = useState(false);

  const handleSubmit = (e: FormEvent) => {
    e.preventDefault();
    setErrorMessage("");
    setSuccessMessage("");

    const mobileValidation = validateMobileNumber(mobile);

    if (!mobileValidation.isValid) {
      setErrorMessage(mobileValidation.message);
      return;
    }

    if (!password) {
      setErrorMessage("Please enter your password.");
      return;
    }

    setIsLoading(true);
    setTimeout(() => {
      setIsLoading(false);
      setSuccessMessage("Login successful! Welcome back.");
    }, 1500);
  };

  return (
    <>
      <Navbar />
      <main className="flex flex-1">
        <section className="relative hidden w-1/2 overflow-hidden lg:flex lg:flex-col lg:justify-center">
          <div className="gradient-green absolute inset-0" />
          <div className="absolute inset-0 opacity-10">
            <div className="absolute left-10 top-20 h-40 w-40 rounded-full border border-white/40" />
            <div className="absolute bottom-32 right-16 h-56 w-56 rounded-full border border-white/30" />
            <div className="absolute right-1/3 top-1/2 h-24 w-24 rounded-full border border-white/20" />
          </div>

          <div className="relative z-10 px-12 xl:px-20">
            <div className="animate-slide-in-left mb-8 inline-flex items-center gap-2 rounded-full bg-white/15 px-4 py-2 text-sm font-medium text-green-100 backdrop-blur-sm">
              <Sparkles size={16} />
              Premium Customer Experience
            </div>

            <h2 className="animate-slide-in-left mb-4 text-4xl font-bold leading-tight text-white xl:text-5xl">
              Welcome back to your
              <span className="block text-green-200">Customer Portal</span>
            </h2>

            <p className="animate-fade-in mb-10 max-w-md text-lg leading-relaxed text-green-100">
              Access your services, track requests, and manage your account —
              all in one secure place.
            </p>

            <div className="animate-fade-in space-y-4">
              {[
                { icon: Shield, text: "Secure & encrypted access" },
                { icon: Zap, text: "Instant service management" },
                { icon: Headphones, text: "24/7 customer support" },
              ].map(({ icon: Icon, text }) => (
                <div
                  key={text}
                  className="flex items-center gap-3 text-green-50 transition-transform duration-200 hover:translate-x-1"
                >
                  <div className="flex h-10 w-10 items-center justify-center rounded-xl bg-white/15 backdrop-blur-sm">
                    <Icon size={18} />
                  </div>
                  <span className="text-sm font-medium">{text}</span>
                </div>
              ))}
            </div>

            <div className="animate-fade-in mt-12 flex items-end gap-4">
              <div className="h-32 w-24 rounded-2xl bg-white/10 backdrop-blur-sm transition-transform duration-300 hover:-translate-y-1" />
              <div className="h-40 w-28 rounded-2xl bg-white/20 backdrop-blur-sm transition-transform duration-300 hover:-translate-y-2" />
              <div className="h-28 w-20 rounded-2xl bg-white/10 backdrop-blur-sm transition-transform duration-300 hover:-translate-y-1" />
            </div>
          </div>
        </section>

        <section className="flex w-full flex-col items-center justify-center px-4 py-12 lg:w-1/2 lg:py-16">
          <div className="absolute inset-0 -z-10 overflow-hidden lg:left-1/2">
            <div className="absolute right-0 top-20 h-64 w-64 rounded-full bg-green-100/40 blur-3xl" />
            <div className="absolute bottom-20 left-10 h-48 w-48 rounded-full bg-emerald-100/40 blur-3xl" />
          </div>

          <AuthCard
            title="Sign In"
            subtitle="Enter your credentials to access your account"
            className="lg:animate-fade-in-up"
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
                label="Mobile Number"
                type="tel"
                placeholder="10-digit mobile number"
                value={mobile}
                onChange={(e) => setMobile(e.target.value)}
                icon={<Phone size={18} />}
                maxLength={10}
                autoComplete="tel"
              />

              <div>
                <InputField
                  label="Password"
                  type="password"
                  placeholder="Enter your password"
                  value={password}
                  onChange={(e) => setPassword(e.target.value)}
                  icon={<Lock size={18} />}
                  showPasswordToggle
                  autoComplete="current-password"
                />
                <div className="mt-2 text-right">
                  <Link
                    href="#"
                    className="text-xs font-medium text-green-600 transition-colors hover:text-green-700 hover:underline"
                  >
                    Forgot Password?
                  </Link>
                </div>
              </div>

              <Button type="submit" fullWidth isLoading={isLoading}>
                Login
              </Button>
            </form>

            <p className="mt-6 text-center text-sm text-slate-500">
              Don&apos;t have an account?{" "}
              <Link
                href="/register"
                className="font-semibold text-green-600 transition-colors hover:text-green-700"
              >
                Create new account
              </Link>
            </p>
          </AuthCard>
        </section>
      </main>
      <Footer />
    </>
  );
}
