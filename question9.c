#include <stdio.h>
int sumOfOddNumbers(int n) {
 int sum = 0;
 for (int i = 1; i < 2 * n; i += 2) {
 sum += i;
 }
 return sum;
}
int main() {
 int n = 5;
 printf("Sum of the first %d oddnumbers is: %d\n", n,sumOfOddNumbers(n));
 return 0;
}