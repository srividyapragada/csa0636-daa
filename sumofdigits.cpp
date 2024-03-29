#include <stdio.h>

// Function to find the sum of digits
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10; // Extract the last digit
        sum += digit; // Add the last digit to sum
        printf("%d", digit);
        if (num / 10 != 0) // Check if there are more digits to process
            printf(" + ");
        num /= 10; // Remove the last digit
    }
    return sum;
}

// Main function
int main() {
    int number;
    
    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    // Calculate and print sum of digits
    printf(" = %d\n", sumOfDigits(number));
    
    return 0;
}
