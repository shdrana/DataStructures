#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;

};

typedef struct Node node;

node *sefuda, *person;


void inserEnd(int value)
{
    if(sefuda == NULL)
    {
        person = (node*)malloc(sizeof(node));
        person->data = value;
        person->next = NULL;
        sefuda = person;
    }

    else
    {
        person->next = (node*)malloc(sizeof(node));
        person = person->next;
        person->data = value;
        person->next = NULL;

    }


}

void printData()
{
    while(sefuda!= NULL)
    {
        printf("%d ", sefuda->data);
        sefuda = sefuda->next;

    }

}


int main()
{
    int value, i;

    sefuda = NULL;

    for(i = 1; i<=4; i++)
    {
        scanf("%d", &value);
        inserEnd(value);

    }

    printData();






    return 0;
}

