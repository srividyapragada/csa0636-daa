#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to print Pascal's triangle
void printPascalTriangle(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", factorial(i) / (factorial(j) * factorial(i - j)));
        }
        printf("\n");
    }
}

// Main function
int main() {
    int rows;
    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &rows);
    printf("Pascal's triangle with %d rows:\n", rows);
    printPascalTriangle(rows);
    return 0;
}

