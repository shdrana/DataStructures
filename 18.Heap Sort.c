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

void heapSort(int heap[], int heapSize)
{
    int i, temp;

    buildMaxHeap(heap, heapSize); //Building heap

    for(i = heapSize; i>1; i--)
    {
        temp = heap[1];
        heap[1] = heap[heapSize];
        heap[heapSize] = temp;

        heapSize--;

        maxHefipy(heap, heapSize, 1);
    }
}


int main()
{
    int heap[] = {0, 20, 21, 33, 55, 23, 28, 45}; //we will not use first index

    heapSort(heap, 7);
    int i;
    for(i = 1; i<=7; i++)
    {
        printf("%d ", heap[i]);
    }


    return 0;
}

