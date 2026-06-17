import { type ReactNode } from "react";
import { Shield } from "lucide-react";

interface AuthCardProps {
  title: string;
  subtitle?: string;
  children: ReactNode;
  className?: string;
}

export default function AuthCard({
  title,
  subtitle,
  children,
  className = "",
}: AuthCardProps) {
  return (
    <div
      className={`
        w-full max-w-md rounded-2xl border border-slate-100 bg-white p-8
        auth-card-shadow animate-fade-in-up
        ${className}
      `}
    >
      <div className="mb-8 flex flex-col items-center text-center">
        <div className="mb-4 flex h-14 w-14 items-center justify-center rounded-2xl bg-green-600 text-white shadow-lg shadow-green-600/30 transition-transform duration-300 hover:scale-105">
          <Shield size={28} strokeWidth={2} />
        </div>
        <h1 className="text-2xl font-bold tracking-tight text-slate-900">
          {title}
        </h1>
        {subtitle && (
          <p className="mt-2 text-sm text-slate-500">{subtitle}</p>
        )}
      </div>
      {children}
    </div>
  );
}
