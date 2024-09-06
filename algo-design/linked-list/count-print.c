#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node *link;
};

// TAG count the length
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

// TAG print the data
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

// TAG adding a node at the end of the list
void insertLinkedList(struct node *head, int num) {
    struct node *ptr = head;
    struct node *next = (struct node *)malloc(sizeof(struct node));

    next->num = num;
    next->link = NULL;

    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = next;
}

int main() {

    // TAG head struct ---> first
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

    insertLinkedList(first, 5);

    // TAG divider
    printf("Linked list = ");
    printLinkedList(first);
    printf("\nLinked list total = %d\n", countLinkedList(first));

    return 0;
}