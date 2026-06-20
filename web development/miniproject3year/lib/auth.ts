import type { AuthResponse } from "./api";

const AUTH_STORAGE_KEY = "customer_portal_auth";

export function saveAuthSession(data: AuthResponse): void {
  if (typeof window === "undefined") return;
  localStorage.setItem(AUTH_STORAGE_KEY, JSON.stringify(data));
}

export function getAuthSession(): AuthResponse | null {
  if (typeof window === "undefined") return null;

  const raw = localStorage.getItem(AUTH_STORAGE_KEY);
  if (!raw) return null;

  try {
    return JSON.parse(raw) as AuthResponse;
  } catch {
    return null;
  }
}

export function clearAuthSession(): void {
  if (typeof window === "undefined") return;
  localStorage.removeItem(AUTH_STORAGE_KEY);
}

export function getStoredUserId(): number | null {
  const session = getAuthSession();
  if (!session) return null;

  const id = session.user_id ?? session.id;
  return typeof id === "number" ? id : null;
}
