#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int count, int current) {
    if (current >= count) {
        return;
    }
    printf("%d ", fibonacci(current));
    printFibonacciSeries(count, current + 1);
}

int main() {
    int numTerms;
    
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &numTerms);

    if (numTerms <= 0) {
        printf("The number of terms should be a positive integer.\n");
    } else {
        printf("Fibonacci series up to %d terms:\n", numTerms);
        printFibonacciSeries(numTerms, 0);
        printf("\n");
    }

    return 0;
}

