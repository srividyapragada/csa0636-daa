#include <stdio.h>

// Function to print Fibonacci series using recursion
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to print Fibonacci series with addition showing
void printFibonacciWithAddition(int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d", fibonacci(i));
        if (i != n - 1)
            printf(" + ");
    }
    printf("\n");
}

// Main function
int main() {
    int terms;
    
    // Input number of terms from user
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);
    
    // Print Fibonacci series with addition showing
    printf("Fibonacci series with addition up to %d terms:\n", terms);
    printFibonacciWithAddition(terms);
    
    return 0;
}
