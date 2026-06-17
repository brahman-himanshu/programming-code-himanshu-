"use client";

import { type InputHTMLAttributes, type ReactNode, useState } from "react";
import { Eye, EyeOff } from "lucide-react";

interface InputFieldProps extends InputHTMLAttributes<HTMLInputElement> {
  label: string;
  error?: string;
  hint?: string;
  icon?: ReactNode;
  showPasswordToggle?: boolean;
}

export default function InputField({
  label,
  error,
  hint,
  icon,
  showPasswordToggle = false,
  type = "text",
  className = "",
  id,
  ...props
}: InputFieldProps) {
  const [showPassword, setShowPassword] = useState(false);
  const inputId = id || label.toLowerCase().replace(/\s+/g, "-");
  const isPassword = type === "password";
  const inputType = isPassword && showPassword ? "text" : type;

  return (
    <div className="space-y-1.5">
      <label
        htmlFor={inputId}
        className="block text-sm font-medium text-slate-700"
      >
        {label}
      </label>
      <div className="relative">
        {icon && (
          <div className="pointer-events-none absolute left-3 top-1/2 -translate-y-1/2 text-slate-400">
            {icon}
          </div>
        )}
        <input
          id={inputId}
          type={inputType}
          className={`
            w-full rounded-xl border bg-white px-4 py-3 text-sm text-slate-900
            transition-all duration-200 placeholder:text-slate-400
            focus:border-green-500 focus:outline-none focus:ring-2 focus:ring-green-500/20
            ${icon ? "pl-10" : ""}
            ${showPasswordToggle ? "pr-10" : ""}
            ${error ? "border-red-300 focus:border-red-500 focus:ring-red-500/20" : "border-slate-200 hover:border-slate-300"}
            ${className}
          `}
          {...props}
        />
        {showPasswordToggle && isPassword && (
          <button
            type="button"
            onClick={() => setShowPassword(!showPassword)}
            className="absolute right-3 top-1/2 -translate-y-1/2 text-slate-400 transition-colors hover:text-slate-600"
            aria-label={showPassword ? "Hide password" : "Show password"}
          >
            {showPassword ? <EyeOff size={18} /> : <Eye size={18} />}
          </button>
        )}
      </div>
      {error && (
        <p className="text-xs font-medium text-red-500">{error}</p>
      )}
      {hint && !error && (
        <p className="text-xs text-slate-500">{hint}</p>
      )}
    </div>
  );
}
