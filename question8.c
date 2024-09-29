#include <stdio.h>
int power(int base, int exp) {
 int result = 1;
 for (int i = 0; i < exp; i++) {
 result *= base;
 }
 return result;
}
int main() {
 int base = 2, exp = 3;
 printf("%d raised to the power of %d is:%d\n", base, exp, power(base, exp));
 return 0;
}
