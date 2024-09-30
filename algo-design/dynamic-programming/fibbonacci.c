#include <stdio.h>

int fibonacci(int num){
    
    if (num == 0) return 0;
    if (num == 1) return 1;
    
    int arr[num + 1];
    arr[0] = 0;
    arr[1] = 1;
    
    for(int i = 2; i <= num; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    
    return arr[num];
    
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("%d", fibonacci(num));

    return 0;
}

/*

Example Use case for num = 10

dp[0] = 0
dp[1] = 1
dp[2] = dp[1] + dp[0] = 1 + 0 = 1
dp[3] = dp[2] + dp[1] = 1 + 1 = 2
dp[4] = dp[3] + dp[2] = 2 + 1 = 3
dp[5] = dp[4] + dp[3] = 3 + 2 = 5
dp[6] = dp[5] + dp[4] = 5 + 3 = 8
dp[7] = dp[6] + dp[5] = 8 + 5 = 13
dp[8] = dp[7] + dp[6] = 13 + 8 = 21
dp[9] = dp[8] + dp[7] = 21 + 13 = 34
dp[10] = dp[9] + dp[8] = 34 + 21 = 55


*/