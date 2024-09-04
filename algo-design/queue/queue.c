#include <stdio.h>
#define MAX 5

int arr[MAX];
int front = -1;
int rear = -1;

int enqueue(int num) {
    if (rear == MAX - 1) {
        printf("Queue overflow!");
        return -1;
    } else {
        if (front == -1)
            front = 0;
        rear++;
        arr[rear] = num;
    }
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow!");
        return -1;
    } else {
        return arr[front++];
        // IMPORTANT return the current front and then increment the  front.
        // IMPORTANT Alternative int value = arr[front] -> font++ -> return
        // value
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    printf("\n");
    for (int i = 0; i <= rear; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nRemoved queue: %d\n", dequeue());

    for (int i = front; i <= rear; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
