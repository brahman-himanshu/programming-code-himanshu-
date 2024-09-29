#include <stdio.h>
int lcm(int a, int b) {
 int max = (a > b) ? a : b;
 while (1) {
 if (max % a == 0 && max % b == 0) {
 return max;
 }
 max++;
 }
}
int main() {
 int a = 12, b = 15;
 printf("LCM of %d and %d is: %d\n", a, b, lcm(a, b));
 return 0;
}
