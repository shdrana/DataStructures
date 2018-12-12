#include <stdio.h>
#include <stdlib.h>

int left(int i)
{
    return 2*i;
}

int right(int i)
{
    return (2*i)+1;
}


int parent(int i)
{
    return i/2;
}

void maxHefipy(int heap[], int heapSize, int i)
{
    int l, r, largest;

    l = left(i);
    r = right(i);

    if(l<=heapSize && heap[l]>heap[i])
    {
        largest = l;
    }
    else
    {
        largest = i;
    }

    if(r<=heapSize && heap[r]>heap[largest])
    {
        largest = r;

    }

    if(largest!= i)
    {
        int temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;

        maxHefipy(heap, heapSize, largest);
    }

}


int main()
{
    int i;
    int heap[] = {0, 20, 21, 33, 55, 23, 28};

    for(i = 3; i>=1; i--)
    {
        maxHefipy(heap, 7, i);
    }

    for(i = 1; i<7; i++)
    {
        printf("%d ", heap[i]);
    }

    return 0;
}

