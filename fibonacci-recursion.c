#include <stdio.h>

int fibonacci(int angka1, int angka2, int selection) {
    int angka3;
    if (selection > 0) {
        printf("%d ", angka1);
        angka3 = angka1 + angka2;
        angka1 = angka2;
        angka2 = angka3;
        fibonacci(angka1, angka2, selection - 1);
    }
}

// NOTE
// Let say angka1 = 1; angka2 = 2; selection = 4;

// REMARK
// since (selection - 1)
// fibonacci 4 --> fibonacci(1, 2, 4)
// fibonacci 3 --> fionacci(2, (1 + 2), 3)
// fibonacci 2 --> fionacci(3, (2 + 3), 2)
// fibonacci 1 --> fionacci(5, (3 + 5), 1)

// NOTE
// since we put the printf("%d ", angka1); in the beginning
// then the value that will be returned = 1, 2, 3, 5

int main() {
    int angka1;
    int angka2;
    int selection;
    printf("Enter first number: ");
    scanf("%d", &angka1);
    printf("Enter second number: ");
    scanf("%d", &angka2);
    printf("Enter how many repetition: ");
    scanf("%d", &selection);

    fibonacci(angka1, angka2, selection);
    return 0;
}