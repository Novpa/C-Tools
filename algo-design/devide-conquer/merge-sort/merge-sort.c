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

    int i = 0;
    int j = 0;
    int k = left;

    while (i < sizeLeft && j < sizeRight) {
        if (arrLeft[i] <= arrRight[j]) {
            arr[k] = arrLeft[i];
            i++;
        } else {
            arr[k] = arrRight[j];
            j++;
        }
        k++;
    }

    // Copying remaining element to the array and will be compare later on (left
    // side)
    while (i < sizeLeft) {
        arr[k] = arrLeft[i];
        i++;
        k++;
    }

    // Copying remaining element to the array and will be compare later on
    // (right    side)

    while (j < sizeRight) {
        arr[k] = arrRight[j];
        j++;
        k++;
    }
}

// Merge & Sort
int mergeSort(int array[], int left, int right) {

    // Base case
    // This works once the element has one or no element, so It's already
    // sorted or the left is greater than the right.
    if (left < right) {

        // Calculate the middle index of the current subarray
        int mid = left + (right - left) / 2;

        // Call the function recursively until touch the `base case`
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);

        // Merge all the sorted value
        merge(array, left, mid, right);
    }
}

void printArr(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {

    int arr[] = {3, 12, 2, 43, 5, 17};
    int length = sizeof(arr) / sizeof(arr[0]);
    int right = length - 1;

    printArr(arr, length);
    printf("\n");
    mergeSort(arr, 0, right);
    printArr(arr, length);

    return 0;
}