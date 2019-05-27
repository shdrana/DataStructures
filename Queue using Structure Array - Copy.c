#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE 5

struct Queue
{
    int data[MAX_QUEUE+1];
    int head, tail;
};

typedef struct Queue Queue;

void enqueue(Queue *queue, int item)
{
    if((queue->tail+1)%(MAX_QUEUE+1) == queue->head)
    {
        printf("Queue is Full!\n");
    }
    queue->data[queue->tail] = item;
    queue->tail = (queue->tail+1)%(MAX_QUEUE+1);

}

int dequeue(Queue *queue)
{
    int item;

    if(queue->tail == queue->head)
    {
        printf("queue is Empty!\n");
        return -1;
    }

    item = queue->data[queue->head];
    queue->head = (queue->head+1)%(MAX_QUEUE+1);
    return item;
}

int main()
{
    Queue queue;

    queue.head = 0;
    queue.tail = 0;

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    enqueue(&queue, 40);

    printf("%d\n", dequeue(&queue));

    return 0;
}
