#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node *link;
};

int countLinkedList(struct node *head) {
    if (head == NULL) {
        printf("Linked list is empty\n");
        return 0;
    }
    int count = 0;
    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL) {
        count++;
        ptr = ptr->link;
    }

    return count;
}

int printLinkedList(struct node *head) {
    if (head == NULL) {
        printf("Linked list is empty\n");
        return 0;
    }
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->num);
        ptr = ptr->link;
    }
}

int main() {

    struct node *first = (struct node *)malloc(sizeof(struct node));
    first->num = 1;
    first->link = NULL;

    struct node *second = (struct node *)malloc(sizeof(struct node));
    second->num = 2;
    second->link = NULL;

    first->link = second;

    struct node *third = (struct node *)malloc(sizeof(struct node));
    third->num = 3;
    third->link = NULL;

    second->link = third;

    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    fourth->num = 4;
    fourth->link = NULL;

    third->link = fourth;

    printf("Linked list total = %d\n", countLinkedList(first));
    printf("Linked list = ");
    printLinkedList(first);

    return 0;
}