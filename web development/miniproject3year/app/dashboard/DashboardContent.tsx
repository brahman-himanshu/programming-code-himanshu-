"use client";

import { useEffect, useState } from "react";
import Link from "next/link";
import { useRouter, useSearchParams } from "next/navigation";
import { AlertCircle, LogOut, User } from "lucide-react";
import Button from "@/components/Button";
import Footer from "@/components/Footer";
import Navbar from "@/components/Navbar";
import { getCustomer } from "@/lib/api";
import {
  clearAuthSession,
  getAuthSession,
  getStoredUserId,
} from "@/lib/auth";

export default function DashboardContent() {
  const router = useRouter();
  const searchParams = useSearchParams();
  const [customer, setCustomer] = useState<Record<string, unknown> | null>(null);
  const [errorMessage, setErrorMessage] = useState("");
  const [isLoading, setIsLoading] = useState(true);

  useEffect(() => {
    const userIdParam = searchParams.get("userId");
    const userId = userIdParam ? Number(userIdParam) : getStoredUserId();

    if (!userId || Number.isNaN(userId)) {
      setIsLoading(false);
      setErrorMessage("No user session found. Please login again.");
      return;
    }

    getCustomer(userId)
      .then((data) => {
        setCustomer(data as Record<string, unknown>);
      })
      .catch((error) => {
        setErrorMessage(
          error instanceof Error
            ? error.message
            : "Failed to load customer details."
        );
      })
      .finally(() => {
        setIsLoading(false);
      });
  }, [searchParams]);

  const handleLogout = () => {
    clearAuthSession();
    router.push("/login");
  };

  const session = getAuthSession();

  return (
    <>
      <Navbar />
      <main className="flex flex-1 items-center justify-center px-4 py-12">
        <div className="w-full max-w-lg rounded-2xl border border-slate-100 bg-white p-8 auth-card-shadow">
          <div className="mb-6 flex items-center justify-between">
            <div className="flex items-center gap-3">
              <div className="flex h-12 w-12 items-center justify-center rounded-xl bg-green-600 text-white">
                <User size={22} />
              </div>
              <div>
                <h1 className="text-xl font-bold text-slate-900">
                  Customer Dashboard
                </h1>
                <p className="text-sm text-slate-500">MistriPoint API</p>
              </div>
            </div>
            <Button variant="ghost" onClick={handleLogout}>
              <LogOut size={16} />
              Logout
            </Button>
          </div>

          {isLoading && (
            <p className="text-sm text-slate-500">Loading customer data...</p>
          )}

          {errorMessage && (
            <div className="mb-4 flex items-start gap-2 rounded-xl border border-red-100 bg-red-50 px-4 py-3 text-sm text-red-600">
              <AlertCircle size={18} className="mt-0.5 shrink-0" />
              <span>{errorMessage}</span>
            </div>
          )}

          {!isLoading && !errorMessage && customer && (
            <div className="space-y-3 rounded-xl bg-slate-50 p-4">
              {Object.entries(customer).map(([key, value]) => (
                <div
                  key={key}
                  className="flex items-center justify-between border-b border-slate-200 pb-2 last:border-0 last:pb-0"
                >
                  <span className="text-sm font-medium capitalize text-slate-600">
                    {key.replace(/_/g, " ")}
                  </span>
                  <span className="text-sm font-semibold text-slate-900">
                    {String(value)}
                  </span>
                </div>
              ))}
            </div>
          )}

          {session && (
            <div className="mt-6">
              <p className="mb-2 text-xs font-semibold uppercase tracking-wide text-slate-400">
                Login Session
              </p>
              <pre className="overflow-x-auto rounded-xl bg-slate-900 p-4 text-xs text-green-300">
                {JSON.stringify(session, null, 2)}
              </pre>
            </div>
          )}

          <p className="mt-6 text-center text-sm text-slate-500">
            <Link href="/login" className="text-green-600 hover:text-green-700">
              Back to Login
            </Link>
          </p>
        </div>
      </main>
      <Footer />
    </>
  );
}
