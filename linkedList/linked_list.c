#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;

    a = (struct Node *)malloc(sizeof(struct Node));
    b = (struct Node *)malloc(sizeof(struct Node));
    c = (struct Node *)malloc(sizeof(struct Node));
    a->data = 10;
    a->next = b;
    b->data = 67;
    b->next = c;
    c->data = 30;
    c->next = NULL;

    while (a != NULL)
    {
        printf(" %d \n", a->data);
        a = a->next;
    }

    return 0;
}