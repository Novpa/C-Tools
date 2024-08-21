#include <stdio.h>

int fibonacci(int angka1, int angka2, int selection) {
    int total;
    int i;
    while (i < selection) {
        total = angka1 + angka2;
        printf("%d ", angka1);
        angka1 = angka2;
        angka2 = total;
        i++;
    }
}

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

// #include <stdio.h>

// float tabungan(int mo, int w, float p) {
//     float mt = mo * (1 + w * (p / 100));
//     printf("\n\n================================================");
//     printf("\nJumlah tabungan selama %d tahun = Rp. %.2f", w, mt);
//     printf("\n================================================");
// }

// int main() {
//     int mo, w;
//     float p;
//     printf("Input jumlah tabungan mula-mula(Rp): ");
//     scanf("%d", &mo);
//     printf("Input periode lama anda menabung (Tahun): ");
//     scanf("%d", &w);
//     printf("Input persentase bunga dalam desimal(%%): ");
//     scanf("%f", &p);
//     tabungan(mo, w, p);
//     return 0;
// }