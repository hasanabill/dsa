#include <stdio.h>
#define SIZE 3

int stack[SIZE];
int top = -1;
void push(int x)
{
    if (top < SIZE - 1)
    {
        top++;
        stack[top] = x;
        printf("Successfully inserted %d\n", x);
    }
    else
    {
        printf("Stack is full\n");
    }
}

int pop()
{
    if (top >= 0)
    {
        int val = stack[top];
        top--;
        return val;
    }
    printf("Stack is empty\n");
    return -1;
}

int peek()
{
    if (top >= 0)
    {
        return stack[top];
    }
    printf("Stack is empty\n");
    return -1;
}

int main()
{
    printf("Implementing my stack in C\n");
    peek();
    pop();
    push(10);
    push(20);
    printf("popped %d\n", pop());
    push(6521);
    push(40);
    printf("Top of stack %d\n", peek());

    return 0;
}