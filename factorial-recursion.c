#include <stdio.h>

int factorial(int num) {

    if (num != 1) {
        return num * factorial(num - 1);
    } else {
        return 1;
    }
}

// NOTE
//  factorial (3) --> return 3 * factorial(2)
//  factorial (2) --> return 2 * factorial(1)
//  factorial (1) --> return 1

// NOTE
//  Then it will be :
//  factorial (3) --> return 3 * 2 ==> (6)
//  factorial (2) --> return 2 * 1
//  factorial (1) --> return 1

int main() {
    int num = factorial(5);
    printf("%d\n", num);
    return 0;
}