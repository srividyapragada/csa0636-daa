#include <stdio.h>
int digitSum(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int maxDigitSum(int arr[], int n) {
    int maxSum = 0;
    for (int i = 0; i < n; i++) {
        int sum = digitSum(arr[i]);
        if (sum > maxSum) {
            maxSum = sum;
        }
    }
    return maxSum;
}

int main() {
    int arr[] = {123, 456, 789, 102};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = maxDigitSum(arr, n);

    printf("Maximum digit sum in the array: %d\n", maxSum);
    return 0;
}
