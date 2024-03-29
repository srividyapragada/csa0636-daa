#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Check if key is present at mid
        if (arr[mid] == key)
            return mid;
        
        // If key is greater, ignore left half
        if (arr[mid] < key)
            left = mid + 1;
        // If key is smaller, ignore right half
        else
            right = mid - 1;
    }
    
    // If key is not present in array
    return -1;
}

// Main function
int main() {
    int size, key;
    
    // Input array size from user
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    // Input array elements from user
    int arr[size];
    printf("Enter %d elements in sorted order:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input key to search from user
    printf("Enter the key to search: ");
    scanf("%d", &key);
    
    // Perform binary search
    int index = binarySearch(arr, 0, size - 1, key);
    
    // Print result
    if (index != -1)
        printf("Element %d found at index %d.\n", key, index);
    else
        printf("Element %d not found in the array.\n", key);
        
        return 0;
    }
