#include <stdio.h>

int countDigits(int num) {
    if (num <= 9) {
        return 1;
    }

    return 1 + countDigits(num / 10);
}

int main() {
    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\n%d has %d digits\n", num, countDigits(num));
    return 0;
}