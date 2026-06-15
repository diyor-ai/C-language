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
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

struct Node *createList(int arr[], int size)
{
    struct Node *head = NULL;
    struct Node *tail = NULL;

    for (int i = 0; i < size; i++)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = arr[i];
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            tail = head;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

struct Node *mergeAlternate(struct Node *L1, struct Node *L2)
{
    if (L1 == NULL)
        return L2;
    if (L2 == NULL)
        return L1;

    struct Node *p1 = L1;
    struct Node *p2 = L2;
    struct Node *next1 = NULL;
    struct Node *next2 = NULL;

    while (p1 != NULL && p2 != NULL)
    {
        next1 = p1->next;
        next2 = p2->next;

        p1->next = p2;
        p2->next = next1;

        p1 = next1;
        p2 = next2;
    }

    return L1;
}

int main()
{
    int arr1[] = {5, 10, 15, 20, 25};
    int arr2[] = {3, 6, 9, 12, 15, 18, 21};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    struct Node *L1 = createList(arr1, size1);
    struct Node *L2 = createList(arr2, size2);

    printf("L1: ");
    printList(L1);

    printf("L2: ");
    printList(L2);

    struct Node *merged = mergeAlternate(L1, L2);

    printf("Output: ");
    printList(merged);

    struct Node *temp;
    while (merged != NULL)
    {
        temp = merged;
        merged = merged->next;
        free(temp);
    }

    return 0;
}