#include <stdio.h>

int sum(int num) {
    if (num != 0) {
        return num + sum(num - 1);

        // TAG
        //  num = 3 --> 3 + 3
        //  num = 2 --> 2 + 1
        //  num = 1 --> 1

    } else {
        return num;
    }
}

int main() {
    int sumNummber = sum(3);
    printf("Sum: %d\n", sumNummber);
    return 0;
}