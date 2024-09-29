#include <stdio.h>
int isPalindrome(int num) {
 int reversed = 0, original = num;
 while (num != 0) {
 reversed = reversed * 10 + num %
10;
 num /= 10;
 }
 return original == reversed;
}
int main() {
 int num = 121;
 printf("%d is %s palindrome.\n", num,isPalindrome(num) ? "a" : "not a");
 return 0;
}