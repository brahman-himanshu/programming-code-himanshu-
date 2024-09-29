#include <stdio.h>
int sumOfFibonacci(int n) {
 int a = 0, b = 1, sum = 0;
 for (int i = 1; i <= n; i++) {
 sum += a;
 int next = a + b;
 a = b;
 b = next;
 }
 return sum;
}
int main() {
 int n = 5;
 printf("Sum of the first %d Fibonacci numbers is: %d\n", n,sumOfFibonacci(n));
 return 0;
}
