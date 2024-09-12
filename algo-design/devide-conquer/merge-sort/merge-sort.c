#include <stdio.h>

// Merge & Sort
int mergeSort(int array[], int left, int right) {

    // Base case
    // This works once the element has one or no element, so It's already
    // sorted.
    if (left >= right)
        return;

    // Calculate the middle index of the current subarray
    int mid = left + (right - left) / 2;

    // Call the function recursively until touch the `base case`
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Merge all the sorted value
    merge(arr, left, mid, right);
}

int main() {

    int arr[] = {3, 12, 2, 43, 5, 17};

    return 0;
}