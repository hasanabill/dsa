#include <stdio.h>

int main()
{
    int SIZE = 5;
    int rear = 0;

    rear = (rear + 1) % SIZE;
    printf("%d\n", rear);

    return 0;
}