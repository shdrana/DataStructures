#include <stdio.h>

struct HashTable{
    int value;
    int key;
};
void display(struct HashTable[], int dataSize);

int main()
{
    int i;
    struct HashTable hash_table[5];
    int temp;

    for(i = 0; i<5; i++){
        scanf("%d", &temp);
        hash_table[temp%5].value = temp;
        hash_table[temp%5].key = temp%5;
    }

    display(hash_table, 5);

    return 0;
}

void display(struct HashTable arr[], int dataSize)
{
    int i;
    for(i = 0; i<dataSize; i++)
    {
        printf("%d -> %d\n", arr[i].value, arr[i].key);
    }

    printf("-------------");

    printf("%d\n", arr[0].value);
}
