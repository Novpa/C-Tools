#include <stdio.h>

void printAscii(char *str, int len) {
    int total;
    for (int i = 0; i < len; i++) {
        if (str[i] != '\0' && str[i] != '\n') {
            total += str[i];
            printf("%c = %d\n", str[i], str[i]);
        } else {
            break;
        }
    }
    printf("\nTotal ASCII = %d", total);
}

int main() {

    char input[20];
    int length;
    printf("Input some words: ");
    fgets(input, sizeof(input), stdin);

    length = sizeof(input) / sizeof(char);
    int len = length - 1;

    printAscii(input, len);

    return 0;
}