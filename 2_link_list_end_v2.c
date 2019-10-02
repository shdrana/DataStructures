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
    sefuda = NULL; //Intially there is no person in the list. so, sefuda knows nothign
    person = (node*)malloc(sizeof(node)); //create memory for first person
    person->data = 10; //assigning data for first person Rahim

    sefuda = person;   //Sefuda knows the first person

    person->next = (node*)malloc(sizeof(node)); //creating memory for next person, Karim
    person->next->data = 20; //Assigning data for Karim

    person->next->next = (node*)malloc(sizeof(node)); //creating memory for next person Rakib
    person->next->next->data = 30; //Assigning data for Rakib

    person->next->next->next = (node*)malloc(sizeof(node));  //creating memory for sakib
    person->next->next->next->data = 40; //assigning data for sakib

    person->next->next->next->next = NULL; //There no person in next 


    //we can print all the data in same way
    printf("%d ", person->data);
    printf("%d ", person->next->data);
    printf("%d ", person->next->next->data);
    printf("%d ", person->next->next->next->data);



}

