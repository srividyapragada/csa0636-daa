#include <stdio.h>

// Function to find the sum of digits
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10; // Add the last digit to sum
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
    printf("Sum of digits of %d is: %d\n", number, sumOfDigits(number));
    
    return 0;
}
