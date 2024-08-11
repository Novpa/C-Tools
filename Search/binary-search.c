#include <stdio.h>

int binary_search_function(int arr[], int num, int left, int right) {

    int mid = left + (right - left) / 2;
    if (left > right)
        return -1;

    if (arr[mid] == num) {
        return mid;
    } else if (arr[mid] < num) {
        return binary_search_function(arr, num, mid + 1, right);

    } else if (arr[mid] > num) {
        return binary_search_function(arr, num, left, mid - 1);
    }
}

int main() {

    int binarySearch[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int check = binary_search_function(binarySearch, 7, 0, 9);
    printf("%d ", check);
    return 0;
}