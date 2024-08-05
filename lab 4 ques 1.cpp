#include <stdio.h>
double power(double a, int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return a;
    }

    double half_power = power(a, n / 2);

    if (n % 2 == 0) {
        return half_power * half_power;
    } else { 
        return a * half_power * half_power;
    }
}

int main() {
    double base;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);
    printf("%lf^%d = %lf\n", base, exponent, result);

    return 0;
}

