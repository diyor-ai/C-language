#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int a;
    struct Node *next;
};

typedef struct Node TNode;

int printList(TNode *head)
{
    TNode *p = head;
    int i = 0;

    while (p != NULL)
    {
        printf("%3d\n", p->a);
        p = p->next;
        i++;
    }

    return i;
}

int main()
{
    TNode *head = malloc(sizeof(TNode));

    head->a = 5;
    head->next = NULL;

    int total = printList(head);

    printf("Total nodes: %d\n", total);

    free(head);

    return 0;
}