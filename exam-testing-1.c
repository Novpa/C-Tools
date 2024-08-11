#include <stdio.h>

void incrementWords(char word[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%c", word[i] + 1);
    }
}

int main() {
    char incrementWord[] = "abcd abcd";
    int length = sizeof(incrementWord) / sizeof(incrementWord[0]);
    incrementWords(incrementWord, length);

    return 0;
}