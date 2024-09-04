#include <stdio.h>
#define MAX 5

int arr[MAX];
int top = -1;

// Adding element to array
int push(int num) {
    if (top == MAX - 1) {
        printf("Array is overflow\n");
        return -1;
    } else {
        top++;
        arr[top] = num;
    }
}

// Remove last elemet of the array
int pop() {
    if (top == -1) {
        printf("Array is empty\n");
        return -1;
    } else {
        top--;
        return arr[top];
    }
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);

    for (int i = 0; i <= top; i++) {
        printf("%d ", arr[i]);
    }

    pop();
    printf("\n");

    for (int i = 0; i <= top; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// gcc -o stacks stacks.c