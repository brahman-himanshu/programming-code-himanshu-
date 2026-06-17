export type PasswordStrength = "weak" | "fair" | "good" | "strong";

export function getPasswordStrength(password: string): {
  strength: PasswordStrength;
  score: number;
  label: string;
  color: string;
} {
  if (!password) {
    return { strength: "weak", score: 0, label: "Enter a password", color: "bg-slate-200" };
  }

  let score = 0;
  if (password.length >= 8) score += 25;
  if (password.length >= 12) score += 15;
  if (/[a-z]/.test(password)) score += 15;
  if (/[A-Z]/.test(password)) score += 15;
  if (/[0-9]/.test(password)) score += 15;
  if (/[^a-zA-Z0-9]/.test(password)) score += 15;

  if (score < 40) {
    return { strength: "weak", score, label: "Weak", color: "bg-red-500" };
  }
  if (score < 60) {
    return { strength: "fair", score, label: "Fair", color: "bg-amber-500" };
  }
  if (score < 80) {
    return { strength: "good", score, label: "Good", color: "bg-emerald-400" };
  }
  return { strength: "strong", score, label: "Strong", color: "bg-green-600" };
}

export function validateMobileNumber(mobile: string): {
  isValid: boolean;
  message: string;
} {
  const cleaned = mobile.replace(/\s/g, "");

  if (!cleaned) {
    return { isValid: false, message: "Mobile number is required" };
  }

  if (!/^\d+$/.test(cleaned)) {
    return { isValid: false, message: "Only digits are allowed" };
  }

  if (cleaned.length < 10) {
    return { isValid: false, message: "Must be at least 10 digits" };
  }

  if (cleaned.length > 10) {
    return { isValid: false, message: "Must be exactly 10 digits" };
  }

  if (!/^[6-9]/.test(cleaned)) {
    return { isValid: false, message: "Must start with 6, 7, 8, or 9" };
  }

  return { isValid: true, message: "Valid mobile number" };
}
