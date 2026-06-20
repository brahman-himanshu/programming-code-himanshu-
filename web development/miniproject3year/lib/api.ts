const API_BASE_URL = "/api/proxy";

export interface RegisterPayload {
  first_name: string;
  last_name: string;
  mobile: string;
  password: string;
}

export interface LoginPayload {
  mobile: string;
  password: string;
}

export interface ValidationErrorItem {
  loc: (string | number)[];
  msg: string;
  type: string;
}

export interface ApiErrorBody {
  detail?: string | ValidationErrorItem[];
  message?: string;
}

export type AuthResponse = {
  message?: string;
  user_id?: number;
  id?: number;
  mobile?: string;
  [key: string]: unknown;
};

export type CustomerResponse = {
  user_id?: number;
  id?: number;
  mobile?: string;
  [key: string]: unknown;
};

class ApiRequestError extends Error {
  status: number;

  constructor(message: string, status: number) {
    super(message);
    this.name = "ApiRequestError";
    this.status = status;
  }
}

function parseErrorMessage(body: ApiErrorBody, status: number): string {
  if (typeof body.detail === "string") {
    return body.detail;
  }

  if (Array.isArray(body.detail) && body.detail.length > 0) {
    return body.detail.map((item) => item.msg).join(". ");
  }

  if (body.message) {
    return body.message;
  }

  return `Request failed with status ${status}`;
}

async function request<T>(
  path: string,
  options?: RequestInit
): Promise<T> {
  const response = await fetch(`${API_BASE_URL}${path}`, {
    ...options,
    headers: {
      "Content-Type": "application/json",
      ...options?.headers,
    },
  });

  const text = await response.text();
  const data = text ? (JSON.parse(text) as T | ApiErrorBody) : ({} as T);

  if (!response.ok) {
    throw new ApiRequestError(
      parseErrorMessage(data as ApiErrorBody, response.status),
      response.status
    );
  }

  return data as T;
}

export async function registerUser(
  payload: RegisterPayload
): Promise<AuthResponse> {
  return request<AuthResponse>("/auth/register", {
    method: "POST",
    body: JSON.stringify(payload),
  });
}

export async function loginUser(payload: LoginPayload): Promise<AuthResponse> {
  return request<AuthResponse>("/auth/login", {
    method: "POST",
    body: JSON.stringify(payload),
  });
}

export async function getCustomer(userId: number): Promise<CustomerResponse> {
  return request<CustomerResponse>(`/auth/customers/${userId}`);
}

export function extractUserId(data: AuthResponse): number | null {
  const id = data.user_id ?? data.id;
  return typeof id === "number" ? id : null;
}
