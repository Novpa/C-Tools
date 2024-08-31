#include <stdio.h>

int linearSearcher(int arr[], int left, int right, int key) {
    if (left >= right)
        return -1;

    if (key == arr[left])
        return left;

    return linearSearcher(arr, left + 1, right, key);
}

int main() {
    int key;

    int arr[] = {10, 20, 30, 40, 50, 23, 45, 66};
    int length = sizeof(arr) / sizeof(arr[0]);

    int left = 0;

    printf("Enter the number: ");
    scanf("%d", &key);

    int result = linearSearcher(arr, left, length, key);

    printf("%d", result);
    return 0;
}