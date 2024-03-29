#include <stdio.h>

// Function to copy string 'src' to string 'dest' using recursion
void copyString(char *src, char *dest) {
    if (*src == '\0') {
        *dest = '\0';
        return;
    }
    *dest = *src;
    copyString(src + 1, dest + 1);
}

int main() {
    char source[100], destination[100];
    
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    // Call the function to copy the string
    copyString(source, destination);

    printf("Source String: %s\n", source);
    printf("Copied String: %s\n", destination);
    
    return 0;
}
