#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *node40 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node45 = (struct Node *)malloc(sizeof(struct Node));

    node40->data = 40;
    node45->data = 45;
    node40->next = node45;
    node45->next = NULL;

    printf("Before: 40 points to 45\n");
    printf("node40->next = %p (points to node45)\n\n", (void *)node40->next);

    struct Node *current = node40;

    printf("SEARCH: Looking for value 40...\n");
    if (current->data == 40)
    {
        printf("Found node with value 40 at address %p\n\n", (void *)current);

        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = 42;

        printf("INSERTION:\n");
        printf("1. Make newNode (value 42) point to what 40 was pointing to (value 45)\n");
        newNode->next = current->next;
        printf("   newNode->next = %p (now points to node45)\n", (void *)newNode->next);

        printf("2. Make node40 point to newNode\n");
        current->next = newNode;
        printf("   node40->next = %p (now points to newNode)\n\n", (void *)current->next);

        printf("Final links:\n");
        printf("40 (%p) -> next points to 42 (%p)\n", (void *)node40, (void *)newNode);
        printf("42 (%p) -> next points to 45 (%p)\n", (void *)newNode, (void *)node45);
        printf("45 (%p) -> next points to NULL\n", (void *)node45);

        free(newNode);
    }

    free(node40);
    free(node45);

    return 0;
}