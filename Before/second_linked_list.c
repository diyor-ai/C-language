#include <stdio.h>
#include <stdlib.h>

// Creating a node
struct node {
    int value;
    struct node *next;
};

// print the linked list value
void printLinkedList(struct node *p) {
    while (p != NULL) {
        printf("%d ", p->value);
        p = p->next;
    }
}

int main() {
    // Initialize nodes
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // Allocate memory
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    // Assign value values
    one->value = 10;
    two->value = 20;
    three->value = 30;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // printing node-value
    head = one;
    printLinkedList(head);
}