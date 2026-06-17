"use client";

import Link from "next/link";
import { usePathname } from "next/navigation";
import { Shield } from "lucide-react";

export default function Navbar() {
  const pathname = usePathname();

  return (
    <header className="sticky top-0 z-50 border-b border-slate-100 bg-white/80 backdrop-blur-md">
      <nav className="mx-auto flex max-w-7xl items-center justify-between px-4 py-4 sm:px-6 lg:px-8">
        <Link
          href="/login"
          className="group flex items-center gap-2.5 transition-opacity hover:opacity-80"
        >
          <div className="flex h-9 w-9 items-center justify-center rounded-lg bg-green-600 text-white shadow-md shadow-green-600/20 transition-transform duration-200 group-hover:scale-105">
            <Shield size={18} />
          </div>
          <span className="text-lg font-bold text-slate-900">
            Customer Portal
          </span>
        </Link>

        <div className="flex items-center gap-3">
          <Link
            href="/login"
            className={`rounded-lg px-4 py-2 text-sm font-medium transition-colors ${
              pathname === "/login"
                ? "bg-green-50 text-green-600"
                : "text-slate-600 hover:bg-slate-50 hover:text-green-600"
            }`}
          >
            Login
          </Link>
          <Link
            href="/register"
            className={`rounded-lg px-4 py-2 text-sm font-semibold transition-all duration-200 ${
              pathname === "/register"
                ? "bg-green-700 text-white shadow-lg shadow-green-600/25"
                : "bg-green-600 text-white shadow-md shadow-green-600/20 hover:bg-green-700 hover:shadow-lg hover:shadow-green-600/25"
            }`}
          >
            Sign Up
          </Link>
        </div>
      </nav>
    </header>
  );
}
