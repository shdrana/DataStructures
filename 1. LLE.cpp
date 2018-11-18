#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};
 
typedef struct Node node;
 
int main()
{
 
    node *Rahim, *Karim, *Rakib, *Sakib; //Declaring all pointer variable to keep data
    node *Sefuda, *Trump; //Declaring sefuda to keep the data of you/first person and Trump to travel all house
 
 
    /*Allocating memory and keep data for all*/
 
    Rahim = (node*)malloc(sizeof(node));
    Rahim->data = 10;
 
    Karim = (node*)malloc(sizeof(node));
    Karim->data = 20;
 
    Rakib = (node*)malloc(sizeof(node));
    Rakib->data = 30;
 
    Sakib = (node*)malloc(sizeof(node));
    Sakib->data = 40;
 
 
    Rahim->next = Karim; //Rahim can tell the address of next person Karim
    Karim->next = Rakib; //Karim can tell the address of next person Rakib
    Rakib->next = Sakib; //Rakib can tell the address of next person Sakib
    Sakib->next = NULL;  //There is no person after sakib. He tells NULL or none
 
    Sefuda = Rahim;      //Sefuda knows the address of first person
    Trump = Sefuda;      //Trump also knows the address of first person
 
 
    /*Trump now visiting to all house */
    while(Trump!= NULL)
    {
        printf("%d ", Trump->data);
        Trump = Trump->next;
    }
 
 
    return 0;
}