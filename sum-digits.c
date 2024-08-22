#include <stdio.h>

int sumDigits(int num) {

    if (num <= 9) {
        return num;
    } else {
        return num % 10 + sumDigits(num / 10);
    }
}

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nSum of %d = %d\n", num, sumDigits(num));
    return 0;
}
