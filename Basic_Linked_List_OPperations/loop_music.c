#include <stdio.h>
#include <stdlib.h>

struct Song
{
    char name[20];
    struct Song *next;
};

int main()
{
    struct Song *first = (struct Song *)malloc(sizeof(struct Song));
    struct Song *second = (struct Song *)malloc(sizeof(struct Song));
    struct Song *third = (struct Song *)malloc(sizeof(struct Song));
    struct Song *fourth = (struct Song *)malloc(sizeof(struct Song));

    first->name[0] = 'A';
    first->name[1] = '\0';
    second->name[0] = 'B';
    second->name[1] = '\0';
    third->name[0] = 'C';
    third->name[1] = '\0';
    fourth->name[0] = 'D';
    fourth->name[1] = '\0';

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = first;

    struct Song *current = first;

    for (int i = 0; i < 12; i++)
    {
        printf("Playing: %s\n", current->name);
        current = current->next;
    }

    free(first);
    free(second);
    free(third);
    free(fourth);

    return 0;
}