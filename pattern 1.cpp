#include <stdio.h>

// Function to print the pattern recursively
void printPattern(int n) {
    if (n == 0)
        return;
    
    printPattern(n - 1); // Recursive call to printPattern with n-1
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i); // Print numbers from 1 to n
    }
    
    printf("\n"); // Move to the next line after printing each row
}

// Main function
int main() {
    int n = 4; // Change this value to print the pattern for different 'n'
    printf("Pattern for n = %d\n", n);
    printPattern(n);
    return 0;
}

