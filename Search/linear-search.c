#include <stdio.h>

int linear_search_function(int arr[], int num, int index, int right) {
    if (index > right) {
        return -1;
    }

    if (arr[index] == num) {
        return index;
    } else {
        return linear_search_function(arr, num, index + 1, right);
    }
}

int main() {

    int binarySearch[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int checkLinear = linear_search_function(binarySearch, 3, 0, 9);
    int contentLinear = binarySearch[checkLinear];
    printf("Linear Search -> index %d = %d", checkLinear, contentLinear);

    return 0;
}