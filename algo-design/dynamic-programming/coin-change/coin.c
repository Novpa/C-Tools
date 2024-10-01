#include <stdio.h>
#include <limits.h>  // untuk INT_MAX

int minCoins(int coins[], int m, int V) {
    int dp[V + 1];

    // Inisialisasi dp array dengan INT_MAX
    dp[0] = 0;
    for (int i = 1; i <= V; i++)
        dp[i] = INT_MAX;

    // Mencari jumlah minimum koin
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
    int coins[] = {1, 2, 5};
    int m = sizeof(coins) / sizeof(coins[0]);
    int V = 11;
    printf("Minimum coins required: %d\n", minCoins(coins, m, V));
    return 0;
}
