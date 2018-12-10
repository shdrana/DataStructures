#include <stdio.h>
#include <stdlib.h>


void merge(int arr[], int left, int mid, int right)
{
    int sizeLeft, sizeRight;

    int i, j, k; //For the index of Left, Right and Merged Array

    sizeLeft = mid-left+1;  //size of every left
    sizeRight = right - mid; //size of every right

    int L[sizeLeft], R[sizeRight];  //declaring the temp array

    //copying the data  left array
    for(i = 0; i<sizeLeft; i++)
    {
        L[i] = arr[left+i];
    }

     //copying the data of right array
    for(i = 0; i<sizeRight; i++)
    {
        R[i] = arr[mid+1+i];
    }


    i = 0; //left array indexing
    j = 0; //right array indexing
    k = left; //merged array indexing

    while(i<sizeLeft && j<sizeRight)
    {
        if(L[i]<=R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<sizeLeft)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j<sizeRight)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[], int left, int right)
{

    if(left>=right)
    {
        return;
    }

    int middle = (left+right)/2;
    mergeSort(arr, left, middle);
    mergeSort(arr, middle+1, right);
    merge(arr, left, middle, right);
}



int main()
{
    int arr[] = {50, 35, 33, 40, 20, 60, 15, 58};
    mergeSort(arr, 0, 7);
    int i = 0;
    for(i = 0; i<8; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

