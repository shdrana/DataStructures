#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear  = -1;

int enqueue(int data)
{
    if (rear == MAX - 1)
    {
        printf("Queue is Full \n");
        return;
    }

    if (rear == - 1)
        front = 0;

    rear = rear+1;
    queue[rear] = data;
}

int dequeue()
{
    if(front> rear)
    {
        printf("Queue is empty\n");
        return 0;
    }

    return queue[front++];
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());





    return 0;
}
