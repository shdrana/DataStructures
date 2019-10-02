#include <stdio.h>
#include <stdlib.h>


/*int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i, j, temp;

    for(i = low-1, j = 0; j<high; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }

    //Swap the pivot
    temp = arr[high];
    arr[high] = arr[i+1];
    arr[i+1] = temp;

    return (i+1);

}*/


int partition (int arr[], int low, int high)
{
    int j;
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for ( j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[high];
    arr[high] = arr[i+1];
    arr[i+1] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if(low>=high)
    {
        return;
    }

    int pivot = partition(arr, low, high);

    quickSort(arr, low, pivot);
    quickSort(arr, pivot+1, high);
}






int main()
{
    int arr[] = {50, 35, 33, 40, 20, 60, 15, 58};
    quickSort(arr, 0, 7);

    int i;
    for(i = 0; i<8; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

