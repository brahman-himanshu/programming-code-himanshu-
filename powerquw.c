 #include <stdio.h>

// Function prototype
double power(double base, int exponent);

int main() {
    double base;
    int exponent;

    // Taking user input
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculating power
    double result = power(base, exponent);

    // Displaying the result
    printf("%.2lf to the power of %d is %.2lf\n", base, exponent, result);

    return 0;
}

// Function definition
double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}