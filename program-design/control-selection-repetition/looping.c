#include <stdio.h>

int main() {

    int kecepatan;
    int waktu;

    printf("Berapa kecepatan pengemudi? ");
    scanf("%d", &kecepatan);

    printf("Berapa waktu yand ditempuh oleh pengemudi? ");
    scanf("%d", &waktu);

    for (int i = 1; i <= waktu; i++) {

        printf("jam ke: %d ,jarak ke: %d\n", i, kecepatan * i);
    }

    return 0;
}