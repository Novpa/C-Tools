#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

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

    return 0;
}