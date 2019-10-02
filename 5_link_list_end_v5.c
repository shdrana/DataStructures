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
    int value, i;

    sefuda = NULL;

    for(i = 1; i<=4; i++)
    {
        scanf("%d", &value);

        if(sefuda == NULL)
        {
            person = (node*)malloc(sizeof(node));   //creating first node 
            person->data = value;   //adding value 
            person->next = NULL;    //we don't know who is gonna next 
            sefuda = person;  //let it know the sefuda/head that it is the first node 
          
        }

        else
        {
            person = (node*)malloc(sizeof(node)); //allocating person for second node, which will replace previous value. No issue on that 
            person->data = value;   //adding value 
            person->next = sefuda;  //next upcoming node will be pointing the sefuda/head
            sefuda = person;  //now second node became sefuda(first node) which pointing to the previous node  

        }
    }

    for(i = 1;i<=4;i++){
        printf("%d ", sefuda->data);
        sefuda = sefuda->next;

    }





    return 0;
}
