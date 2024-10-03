#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b)) // Fixed parentheses in macro

int knapsack(int profit[], int weight[], int length, int maximum){

    // Renamed the knapsack array to avoid conflict with the function name
    int dp[length + 1][maximum + 1];
    int w;
    
    // Loop through all items
    for (int i = 0; i <= length; i++) {

        
        // Loop through all possible capacities
        for (w = 0; w <= maximum; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0; // Base case: no items or zero capacity
    } else if (weight[i] <= w) {
                // Include or exclude the item and take the maximum
                dp[i][w] = MAX(profit[i] + dp[i - 1][w - weight[i]], dp[i - 1][w]);
            } else {
                // Cannot include the item
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    
    // Return the maximum value found in the knapsack
    return dp[length][maximum];
}

int main() {
    int profit[5] = {0, 1, 2, 5, 6};  // Profit of items
    int weight[5] = {0, 2, 3, 4, 5};  // Weights of items
    int maximum = 8;  // Maximum capacity of the knapsack
    
    // Call the knapsack function with 4 items (length = 4)
    printf("%d\n", knapsack(profit, weight, 4, maximum));  // Fixed parentheses and added newline
    
    return 0;
}
