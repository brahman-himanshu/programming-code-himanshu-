import { NextRequest, NextResponse } from "next/server";

const BACKEND_URL =
  process.env.NEXT_PUBLIC_API_URL ??
  "https://mistripoint-backend-2.onrender.com";

async function proxyRequest(
  request: NextRequest,
  path: string[]
): Promise<NextResponse> {
  const url = `${BACKEND_URL}/${path.join("/")}${request.nextUrl.search}`;

  const init: RequestInit = {
    method: request.method,
    headers: {
      "Content-Type": "application/json",
    },
  };

  if (request.method !== "GET" && request.method !== "HEAD") {
    init.body = await request.text();
  }

  const response = await fetch(url, init);
  const text = await response.text();

  return new NextResponse(text, {
    status: response.status,
    headers: {
      "Content-Type":
        response.headers.get("Content-Type") ?? "application/json",
    },
  });
}

type RouteContext = {
  params: Promise<{ path: string[] }>;
};

export async function GET(request: NextRequest, context: RouteContext) {
  const { path } = await context.params;
  return proxyRequest(request, path);
}

export async function POST(request: NextRequest, context: RouteContext) {
  const { path } = await context.params;
  return proxyRequest(request, path);
}
