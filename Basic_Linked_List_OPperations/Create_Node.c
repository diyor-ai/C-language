#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
    node1->data = 10;
    node1->next = NULL;

    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
    node2->data = 20;
    node2->next = NULL;

    node1->next = node2;

    printf("Node1 data: %d\n", node1->data);
    printf("Node2 data: %d\n", node1->next->data);

    free(node1);
    free(node2);
    return 0;
}