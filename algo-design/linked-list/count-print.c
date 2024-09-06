#include <stdio.h>
#include <stdlib.h>

// TAG Node structure
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

// TAG adding a node at the end of the list NOTE ---> O(n)
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

// TAG adding a node at the end of the list NOTE ---> O(1)
struct node *insertLinkedList2(struct node *ptr, int num) {
    struct node *next = malloc(sizeof(struct node));
    next->num = num;
    next->link = NULL;

    ptr->link = next;
    return next;
}

// TAG inserting a node in the beginning of the list
struct node *insertbeginning(struct node *head, int num) {
    struct node *next = malloc(sizeof(struct node));
    next->num = num;
    next->link = NULL;

    next->link = head;
    head = next;
    return head;
}

// TAG inserting a node to a certain data

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

    // Inserting node at the end O(n)
    // insertLinkedList(first, 5);

    // Inserting node at the end O(1)
    struct node *ptr = fourth;
    ptr = insertLinkedList2(ptr, 6);
    ptr = insertLinkedList2(ptr, 7);
    ptr = first;

    // Inserting node in the beginning of the list
    first = insertbeginning(first, 0);
    first = insertbeginning(first, -1);

    // TAG divider
    printf("Linked list = ");
    printLinkedList(first);
    printf("\nLinked list total = %d\n", countLinkedList(first));

    printf("%d\n", fourth->link->num);

    return 0;
}