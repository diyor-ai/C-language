#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int data; struct Node *next; } Node;

int main() {
    int vals[] = {10, 20, 30, 40};
    Node *head = NULL, *tail = NULL;
    
    for (int i = 0; i < 4; i++) {
        Node *new = malloc(sizeof(Node));
        new->data = vals[i];
        new->next = NULL;
        
        if (!head) head = new;
        else tail->next = new;
        tail = new;
    }
    
    for (Node *curr = head; curr; curr = curr->next)
        printf("%d -> ", curr->data);
    printf("NULL\n");
    
    while (head) {
        Node *tmp = head;
        head = head->next;
        free(tmp);
    }
}