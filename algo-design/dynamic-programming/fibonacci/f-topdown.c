#include <stdio.h>

int topDown(int num, int arr[]){
    if (num == 0 || num == 1) return num;

    if (arr[num] != -1){ // If the subproblem has been solved
        return arr[num];
    }

    arr[num] = topDown(num - 1, arr) + topDown(num - 2, arr); // Count and save as an array element
    return arr[num];

}


int main(){
    int num;
    printf("Enter fibonacci number: ");
    scanf("%d", &num);

    int arr[num + 1];

    for(int i = 0; i <= num; i++){
        arr[i] = -1; // Initialization all array element as not counted yet
    }

    printf("Fibonacci number of %d --> %d", num, topDown(num, arr));


    return 0;
}