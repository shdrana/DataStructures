#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;

};

typedef struct Node node;

node *sefuda, *person;
node *current;

void inserEnd(int value)
{
    if(sefuda == NULL)
    {
        person = (node*)malloc(sizeof(node));
        person->data = value;
        person->prev = NULL;
        person->next = NULL;
        sefuda = person;
        current = sefuda;
    }

    else
    {
        person->next = (node*)malloc(sizeof(node));
        person = person->next;
        person->data = value;
        person->prev = current;
        person->next = NULL;
        current = person;
    }


}

void printData()
{
    do
    {
        printf("%d ", sefuda->data);
        sefuda = sefuda->next;
    }
    while(sefuda->next!= NULL);

    printf("%d\n", sefuda->data);

}


void reve()
{
    do
    {
        printf("%d ", sefuda->data);
        sefuda = sefuda->prev;
    }
    while(sefuda->prev!= NULL);

    printf("%d ", sefuda->data);

}


int main()
{
    int value, i;

    sefuda = NULL;


    inserEnd(10);
    inserEnd(20);
    inserEnd(30);
    inserEnd(40);
    printData();
    reve();

    return 0;
}

