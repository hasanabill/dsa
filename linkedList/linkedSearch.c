#include <stdio.h>
#include <stdlib.h>

struct Node *createLinkedList(int arr[], int size);
int searrchLinkedList(struct Node *head, int value);

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int arr[] = {10, 54, 30, 24, 51};
    struct Node *head;
    head = createLinkedList(arr, 5);

    int index = searrchLinkedList(head, 30);
    printf("Value found at index %d\n", index);

    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");

    return 0;
}

int searrchLinkedList(struct Node *head, int value)
{
    int index = 0;
    while (head != NULL)
    {
        if (head->data == value)
        {
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;
}

struct Node *createLinkedList(int arr[], int size)
{
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *current = NULL;

    int i;
    for (i = 0; i < size; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }

    return head;
}