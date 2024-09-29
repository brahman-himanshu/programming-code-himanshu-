 mi#include <stdio.h>
int findLCM(int a, int b, int multiple) {
    if (multiple % a == 0 && multiple % b == 0) {
        return multiple;
    }
    return findLCM(a, b, multiple + 1);
}
int lcm(int a, int b) {
    int max = (a > b) ? a : b;
    return findLCM(a, b, max);
}

int main() {
    int num1, num2;
    printf("Input 1st number for LCM: ");
    scanf("%d", &num1);
    printf("Input 2nd number for LCM: ");
    scanf("%d", &num2);
    printf("The LCM of %d and %d: %d\n", num1, num2, lcm(num1, num2));
    return 0;
}