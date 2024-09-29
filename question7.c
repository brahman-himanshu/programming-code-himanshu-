#include <stdio.h>
int isPerfect(int num) {
 int sum = 0;
 for (int i = 1; i < num; i++) {
 if (num % i == 0) {
 sum += i;
 }
 }
 return sum == num;
}
int main() {
 int num = 28;
 printf("%d is %s perfect number.\n", num,isPerfect(num) ? "a" : "not a");
 return 0;
}
