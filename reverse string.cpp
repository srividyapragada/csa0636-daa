#include <stdio.h>
#include <string.h>

// Function to print the reverse of a string using recursion
void reverseString(char *str) {
    if (*str == '\0') {
        return;
    }
    reverseString(str + 1);
    putchar(*str);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing the newline character at the end of the string
    str[strcspn(str, "\n")] = '\0';

    printf("Reverse of the string: ");
    reverseString(str);
    printf("\n");
    
    return 0;
}
