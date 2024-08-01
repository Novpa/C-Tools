#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
    int mergeLeft = mid - left + 1;
    int mergeRight = right - mid;

    // Devide it in to 2 arrays (TEMPORARY ARRAYS)
    int arrLeft[mergeLeft], arrRight[mergeRight];

    // Copying the the data in to the LEFT ARRAY
    for (int i = 0; i < mergeLeft; i++) {
        arrLeft[i] = arr[left + i];
    }

    // Copying the data in to the RIGHT ARRAY
    for (int j = 0; j < mergeRight; j++) {
        arrRight[j] = arr[mid + 1 + j];
    }

    // Merge the temporary arrays back in to ORIGINAL ARRAY
    int i = 0;
    int j = 0;
    int k = left;

    while (i < mergeLeft && j < mergeRight) {
        if (arrLeft[i] < arrRight[j]) {
            arr[k] = arrLeft[i];
            i++;
        } else {
            arr[k] = arrRight[j];
            j++;
        }
        k++;
    }

    while (i < mergeLeft) {
        arr[k] = arrLeft[i];
        i++;
        k++;
    }

    while (j < mergeRight) {
        arr[k] = arrRight[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {

        int middle = left + (right - left) / 2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

int main() {
    // NOTE: BASE CODE
    int arr[] = {4, 3, 7, 4, 8, 6, 43, 42, 77, 56};
    int length = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, length - 1);
    printf("Merged sort method: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
