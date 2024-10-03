Selamat malam Bapak,
Ijin menjawab 
sebelumnya mohon di-NOTE : dalam langkah ini saya akan lebih mendemonstrasikan menggunakan codingan dalam bahasa C agar lebih mudah untuk memahami logika dari Coin Change probblem ini.
Berikut adalah permasalahannya, diberikan data sebagai berikut:

Coins = {2, 5, 10}
Target (V) = 17

Tujuannya sekarang adalah untuk mencari nilai minimum con yang dibutuhkan  untuk membuat nilai sebesar V = 17 dengan menggunakan data coin di atas {2, 5, 10}. Berikut adalah hasil codingannya

```C
#include <stdio.h>
#include <limits.h>  //Untuk INT_MAX

int minCoins(int coins[], int m, int V) {
    int dp[V + 1];

    // Inisialisasi dp array dengan INT_MAX
    dp[0] = 0;
    for (int i = 1; i <= V; i++)
        dp[i] = INT_MAX;

    //Untuk mencari jumlah minimum koin
    for (int i = 1; i <= V; i++) {
        for (int j = 0; j < m; j++) {
            if (coins[j] <= i) {
                int sub_res = dp[i - coins[j]];
                if (sub_res != INT_MAX && sub_res + 1 < dp[i])
                    dp[i] = sub_res + 1;
            }
        }
    }

    return dp[V] == INT_MAX ? -1 : dp[V];
}

int main() {
    int coins[] = {2, 5, 10};
    int m = sizeof(coins) / sizeof(coins[0]);
    int V = 17;
    printf("Minimum coins required: %d\n", minCoins(coins, m, V));
    return 0;
}
```

__________________________________________________________



sebelumnya sedikit informasi mengenai variable di atas :

coins[]: Array yang berisi denominasi koin yang tersedia. Setiap elemen dalam array menunjukkan nilai dari satu jenis koin yang bisa digunakan.

m: Integer yang menyimpan jumlah koin yang tersedia, yaitu panjang dari array coins[].

V : Nilai integer yang menyimpan jumlah uang target yang ingin kita capai dengan kombinasi koin yang ada.

dp[] : Array yang digunakan untuk menyimpan jumlah minimum koin yang diperlukan untuk mencapai setiap nilai dari 0 hingga V.

dp[i]: menyimpan jumlah minimum koin yang diperlukan untuk mencapai jumlah i.

sub_res: Variabel sementara yang digunakan untuk menyimpan hasil dari submasalah sebelumnya, yaitu jumlah koin minimum yang diperlukan untuk mencapai i - coins[j].

__________________________________________________________
Langkah - Langkah penyelesaian dengan Dynamic Programmin:

Kita mulai dengan inisialisasi array dp[] yang menyimpan jumlah minimum koin untuk mencapai setiap nilai dari 0 hingga 17. dp[0] diinisialisasi dengan 0 karena kita tidak memerlukan koin untuk mencapai nilai 0. Sementara itu, nilai lain dari dp[1] hingga dp[17] diinisialisasi dengan INT_MAX yang menandakan bahwa pada awalnya tidak ada solusi yang ditemukan untuk nilai tersebut.

Utuk dp[1], tidak ada koin yang bisa digunakan karena semua koin yang tersedia (2, 5, dan 10) lebih besar dari 1. Oleh karena itu, dp[1] = INT_MAX, yang menandakan bahwa tidak ada solusi untuk nilai 1. Selanjutnya, untuk dp[2], kita bisa menggunakan koin 2 karena koin ini dapat menghasilkan nilai 2 (menggunakan 1 koin). Jadi, dp[2] = 1, yang berarti kita hanya membutuhkan 1 koin 2 untuk mencapai nilai 2.

Untuk dp[3], kita mencoba menggunakan koin 2, tetapi tidak ada solusi untuk dp[1] karena dp[1] = INT_MAX. Oleh karena itu, tidak ada solusi untuk dp[3] menggunakan koin 2, dan koin 5 dan 10 juga tidak bisa digunakan karena terlalu besar. Jadi, dp[3] = INT_MAX, yang berarti tidak ada solusi. Pada dp[4], kita dapat menggunakan dua koin 2, karena dp[4 - 2] = dp[2] = 1, sehingga dp[4] = 2 (dua koin 2 diperlukan untuk mencapai nilai 4).

Untuk dp[5], koin 5 langsung bisa digunakan untuk mencapai nilai 5. Karena dp[5 - 5] = dp[0] = 0, maka kita hanya membutuhkan 1 koin 5. Oleh karena itu, dp[5] = 1 (1 koin 5). Pada dp[6], kita dapat menggunakan tiga koin 2 untuk mencapai nilai 6. Karena dp[6 - 2] = dp[4] = 2, kita menambah satu koin lagi, sehingga dp[6] = 3 (3 koin 2).

Untuk dp[7], kita bisa menggunakan kombinasi koin 5 dan koin 2. Karena dp[7 - 2] = dp[5] = 1, kita menambah 1 koin 2, sehingga dp[7] = 2 (1 koin 5 dan 1 koin 2). Pada dp[8], kita dapat menggunakan 4 koin 2. Karena dp[8 - 2] = dp[6] = 3, kita menambah 1 koin 2, sehingga dp[8] = 4 (4 koin 2).

Untuk dp[9], kita bisa menggunakan kombinasi koin 5 dan dua koin 2. Karena dp[9 - 2] = dp[7] = 2, kita menambah 1 koin 2, sehingga dp[9] = 3 (1 koin 5 dan 2 koin 2). Pada dp[10], kita bisa langsung menggunakan 1 koin 10, karena dp[10 - 10] = dp[0] = 0, sehingga dp[10] = 1 (1 koin 10).

Untuk dp[11], kita bisa menggunakan kombinasi koin 10 dan koin 2. Karena dp[11 - 2] = dp[9] = 3, kita menambah 1 koin 2, sehingga dp[11] = 4 (1 koin 10 dan 2 koin 2). Pada dp[12], kita bisa menggunakan kombinasi koin 10 dan koin 2. Karena dp[12 - 2] = dp[10] = 1, kita menambah 1 koin 2, sehingga dp[12] = 2 (1 koin 10 dan 1 koin 2).

Untuk dp[13], kita bisa menggunakan kombinasi koin 10 dan dua koin 2. Karena dp[13 - 2] = dp[11] = 4, kita menambah 1 koin 2, sehingga dp[13] = 5 (1 koin 10 dan 2 koin 2). Pada dp[14], kita bisa menggunakan kombinasi koin 10 dan dua koin 2. Karena dp[14 - 2] = dp[12] = 2, kita menambah 1 koin 2, sehingga dp[14] = 3 (1 koin 10 dan 2 koin 2).

Untuk dp[15], kita bisa menggunakan kombinasi koin 10 dan koin 5. Karena dp[15 - 5] = dp[10] = 1, kita menambah 1 koin 5, sehingga dp[15] = 2 (1 koin 10 dan 1 koin 5). Pada dp[16], kita bisa menggunakan kombinasi koin 10 dan tiga koin 2. Karena dp[16 - 2] = dp[14] = 3, kita menambah 1 koin 2, sehingga dp[16] = 4 (1 koin 10 dan 3 koin 2).

Akhirnya, pada dp[17], kita bisa menggunakan kombinasi koin 10, koin 5, dan koin 2. Karena dp[17 - 2] = dp[15] = 2, kita menambah 1 koin 2, sehingga dp[17] = 3 (1 koin 10, 1 koin 5, dan 1 koin 2).

Sehingga, Jumlah minimum koin yang diperlukan untuk mencapai nilai target 17 adalah 3 koin, dengan kombinasi 1 koin 10, 1 koin 5, dan 1 koin 2.


