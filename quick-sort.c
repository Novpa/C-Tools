#include <stdio.h>

void swap(int *x, int *y);
void quickSort(int array[], int length);
void quickSort_recursion(int array[], int low, int hight);
int partition(int array[], int low, int high);

int main() {

    int a[] = {6, 3, 7, 5, 1, 2, 4};

    int length = sizeof(a) / sizeof(a[0]);

    quickSort(a, length);
    for (int i = 0; i < length; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void quickSort(int array[], int length) {

    quickSort_recursion(array, 0, length - 1);
}

void quickSort_recursion(int array[], int low, int high) {

    if (low < high) {
        int pivot_index = partition(array, low, high);
        quickSort_recursion(array, low, pivot_index - 1);
        quickSort_recursion(array, pivot_index + 1, high);
    }
}

int partition(int array[], int low, int high) {

    int pivot_value = array[high];

    //
    //                     j
    //  3, 1, 2, 4, 6, 7, 5
    //           i

    int i = low;

    for (int j = low; j < high; j++) {

        if (array[j] <= pivot_value) {

            swap(&array[i], &array[j]);
            i++;
        }
    }
    swap(&array[i], &array[high]);

    return i;
}