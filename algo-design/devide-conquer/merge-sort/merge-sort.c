#include <stdio.h>

// Merge function
void merge(int arr[], int left, int mid, int right) {

    // Calculate the size of the left and the right array
    int sizeLeft = mid - left + 1;
    int sizeRight = right - mid;

    // Declare a empty array with the size above to store the temporarly array
    // (both in left and right sides)
    int arrLeft[sizeLeft], arrRight[sizeRight];

    // Copy all the data to the temp array
    // LEFT
    for (int i = 0; i < sizeLeft; i++) {
        arrLeft[i] = arr[left + i];
    }

    // This will copy the value right after the middle value of the array and
    // then increment it by j
    for (int j = 0; j < sizeRight; j++) {
        arrRight[j] = arr[mid + 1 + j];
    }
}

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