#include <stdio.h>
#include <stdbool.h>

#define SIZE 5

int queue[SIZE];
int front = 0;
int rear = -1;
int total = 0;

bool isFull()
{
    if (total == SIZE)
    {
        return true;
    }
    return false;
}

bool isEmpty()
{
    if (total == 0)
    {
        return true;
    }
    return false;
}

void enqueue(int item)
{
    if (isFull())
    {
        printf("Queue is Full\n");
        return;
    }
    rear = (rear + 1) % SIZE;
    queue[rear] = item;
    total++;
    printf("Item enqueued: %d\n", item);
}

int dequeue()
{
    if (isEmpty())
    {
        printf("Queue is Empty\n");
        return -1;
    }
    int frontItem = queue[front];
    printf("Item dequeued: %d\n", frontItem);
    queue[front] = 0;
    front = (front + 1) % SIZE;
    total--;
    return frontItem;
}

void printQueue()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    printf("Implementation of Queue\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    printQueue();
    dequeue();
    printQueue();
    enqueue(60);
    dequeue();
    dequeue();
    printQueue();
    enqueue(70);
    printQueue();
    return 0;
}