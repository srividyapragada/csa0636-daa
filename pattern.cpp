#include <stdio.h>

// Function to print the pattern recursively
void printPattern(int n, int i) {
    if (n == 0)
        return;
    
    if (i <= n) {
        printf("%d ", i);
        printPattern(n, i + 1);
    } else {
        printf("\n");
        printPattern(n - 1, 1);
    }
}

// Function to print the pattern with output
void printPatternWithOutput(int n) {
    printf("Pattern for n = %d\n", n);
    printPattern(n, 1);
    printf("\n");
}

// Main function
int main() {
    int n = 4;
    printPatternWithOutput(n);
    return 0;
}
