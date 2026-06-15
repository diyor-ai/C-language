#include <stdlib.h>

struct Node
{
    /* data */
    int a;
    struct Node *next;
};

typedef struct Node TNode;

int main()
{
    TNode * head = NULL, *rear = NULL;
    TNode *p = (TNode*)malloc(sizeof(TNode));
    p->a = 5;
    p->next = NULL;
    head = p ;
    rear = p;
}int printList(TNode *head)
{
    TNode *p = head;
    int i = 0;

    while(p != Null)
    {
        print("%3d\n", p->a);
        p = p->next;
        i++;
    }
    return i;
}

int printList(TNode *head)
{
    TNode *p = head;
    int i = 0;

    while(p != Null)
    {
        print("%3d\n", p->a);
        p = p->next;
        i++;
    }
    return i;
}