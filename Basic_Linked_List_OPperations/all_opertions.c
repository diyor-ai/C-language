#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

struct Node *insertAtBeginning(struct Node *head, int value)
{
    struct Node *newNode = createNode(value);
    newNode->next = head;
    return newNode; // New node becomes the head
}

struct Node *insertAtEnd(struct Node *head, int value)
{
    struct Node *newNode = createNode(value);

    if (head == NULL)
    {
        return newNode;
    }

    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

void printList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int search(struct Node *head, int value)
{
    struct Node *temp = head;
    int position = 0;

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            printf("Found %d at position %d\n", value, position);
            return 1; // Found
        }
        temp = temp->next;
        position++;
    }
    printf("%d not found\n", value);
    return 0; // Not found
}

struct Node *deleteNode(struct Node *head, int value)
{
    if (head == NULL)
    {
        printf("List is empty, can't delete\n");
        return NULL;
    }

    if (head->data == value)
    {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        printf("Deleted %d\n", value);
        return head;
    }

    struct Node *temp = head;
    while (temp->next != NULL && temp->next->data != value)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        printf("%d not found\n", value);
        return head;
    }

    struct Node *nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);
    printf("Deleted %d\n", value);
    return head;
}

int isEmpty(struct Node *head)
{
    return head == NULL;
}

int main()
{
    struct Node *head = NULL; // Start with empty list

    printf("Is list empty? %s\n", isEmpty(head) ? "Yes" : "No");

    head = insertAtBeginning(head, 30);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 10);
    printList(head);

    head = insertAtEnd(head, 40);
    head = insertAtEnd(head, 50);
    printList(head);

    search(head, 30);
    search(head, 100);

    head = deleteNode(head, 20);
    printList(head);

    head = deleteNode(head, 10);
    printList(head);

    printf("Is list empty? %s\n", isEmpty(head) ? "Yes" : "No");
    printf("Final list: ");
    printList(head);

    return 0;
}