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

//forming normal binary tree into heap
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

void buildMaxHeap(int heap[], int heapSize)
{
    int i;
    for(i = heapSize/2; i>=1; i--)
    {
        maxHefipy(heap, heapSize, i);
    }

}


int main()
{
    int i;
    int heap[] = {0, 20, 21, 33, 55, 23, 28, 45}; //we will not use first index

    //calling every node to heapify. it will start from heapsize/2

    buildMaxHeap(heap, 7);

    //print the heap
    for(i = 1; i<8; i++)
    {
        printf("%d ", heap[i]);
    }

    return 0;
}

