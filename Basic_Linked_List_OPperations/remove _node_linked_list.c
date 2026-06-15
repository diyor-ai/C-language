#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printList(struct Node *head)
{
    struct Node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = NULL;
    struct Node *p = NULL;

    for (int i = 1; i <= 10; i++)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            p = head;
        }
        else
        {
            p->next = newNode;
            p = newNode;
        }
    }

    printf("Before: ");
    printList(head);

    struct Node *nodeToDelete = head->next->next->next->next;

    if (nodeToDelete != NULL)
    {
        struct Node *current = head;

        while (current->next != nodeToDelete)
        {
            current = current->next;
        }

        current->next = nodeToDelete->next;
        free(nodeToDelete);
    }

    printf("After: ");
    printList(head);

    p = head;
    while (p != NULL)
    {
        struct Node *temp = p;
        p = p->next;
        free(temp);
    }

    return 0;
}