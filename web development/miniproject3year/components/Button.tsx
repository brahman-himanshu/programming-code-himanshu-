import { type ButtonHTMLAttributes, type ReactNode } from "react";

type ButtonVariant = "primary" | "secondary" | "ghost";

interface ButtonProps extends ButtonHTMLAttributes<HTMLButtonElement> {
  children: ReactNode;
  variant?: ButtonVariant;
  fullWidth?: boolean;
  isLoading?: boolean;
}

const variantStyles: Record<ButtonVariant, string> = {
  primary:
    "bg-green-600 text-white hover:bg-green-700 hover:shadow-lg hover:shadow-green-600/25 active:scale-[0.98]",
  secondary:
    "border border-green-200 bg-white text-green-700 hover:bg-green-50 hover:border-green-300 active:scale-[0.98]",
  ghost:
    "bg-transparent text-green-700 hover:bg-green-50 active:scale-[0.98]",
};

export default function Button({
  children,
  variant = "primary",
  fullWidth = false,
  isLoading = false,
  className = "",
  disabled,
  ...props
}: ButtonProps) {
  return (
    <button
      className={`
        inline-flex items-center justify-center gap-2 rounded-xl px-6 py-3
        text-sm font-semibold transition-all duration-200 ease-out
        focus:outline-none focus:ring-2 focus:ring-green-500/40 focus:ring-offset-2
        disabled:cursor-not-allowed disabled:opacity-60
        ${variantStyles[variant]}
        ${fullWidth ? "w-full" : ""}
        ${className}
      `}
      disabled={disabled || isLoading}
      {...props}
    >
      {isLoading ? (
        <>
          <span className="h-4 w-4 animate-spin rounded-full border-2 border-white/30 border-t-white" />
          Processing...
        </>
      ) : (
        children
      )}
    </button>
  );
}
