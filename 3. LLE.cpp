#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;

};

typedef struct Node node;

node *sefuda, *person;


int main()
{
    sefuda = NULL;
    person = (node*)malloc(sizeof(node));
    person->data = 10;

    sefuda = person;


    //person->next = (node*)malloc(sizeof(node));
    //person->next->data = 20;

    person->next = (node*)malloc(sizeof(node));
    person = person->next;
    person->data = 20;

    //person->next->next = (node*)malloc(sizeof(node));
    //person->next->next->data = 30;

    person->next = (node*)malloc(sizeof(node));
    person = person->next;
    person->data = 30;

    //person->next->next->next = (node*)malloc(sizeof(node));
    //person->next->next->next->data = 40;

    person->next = (node*)malloc(sizeof(node));
    person = person->next;
    person->data = 40;

    //person->next->next->next->next = NULL;

    person->next = NULL;


    //we can print all the data in same way
    printf("%d ", sefuda->data);
    printf("%d ", sefuda->next->data);
    printf("%d ", sefuda->next->next->data);
    printf("%d ", sefuda->next->next->next->data);




return 0;
}

