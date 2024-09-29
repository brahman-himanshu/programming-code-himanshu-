#include <stdio.h>
int count_digits(int number) {
    if (number == 0) {
        return 0;
    }
    return 1 + count_digits(number / 10);
}
int main() {
    int number = 7896;
    int result = count_digits(number);
    printf("Input: %d\n", number);
    printf("Output: %d (There are %d digits in the number)\n", result, result);
    return 0;
}