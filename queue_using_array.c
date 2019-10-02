#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX];
int front = 0;
int rear  = 0;

int enqueue(int data)
{
    if(rear==MAX)
    {
        printf("Queue is full\n");
        return;
    }
    queue[rear++] = data;
}

int dequeue()
{
    if(front == MAX || front == rear)
    {
        printf("Queue is empty\n");
        return -1;
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
