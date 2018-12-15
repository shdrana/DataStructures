#include <stdio.h>
#include <stdlib.h>

int heapSize;

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
void maxHefipy(int heap[], int i)
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

        maxHefipy(heap,largest);
    }



}

void buildMaxHeap(int heap[])
{
    int i;
    for(i = heapSize/2; i>=1; i--)
    {
        maxHefipy(heap, i);
    }

}

int extractMaximum(int heap[])
{
    int maxItem = heap[1];
    heap[1] = heap[heapSize];
    heap[heapSize] = maxItem;
    heapSize--;
    maxHefipy(heap, 1);

    return maxItem;
}



int main()
{
    int heap[] = {0, 20, 21, 33, 55, 23, 28, 45}; //we will not use first index

    heapSize = 7;
    buildMaxHeap(heap);


    printf("%d\n", extractMaximum(heap));
    printf("%d\n", extractMaximum(heap));
    printf("%d\n", extractMaximum(heap));



    return 0;
}

