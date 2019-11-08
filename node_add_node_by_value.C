#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

node *newnode, *head;



void insertByPosition(int position, int value)
{

    int i;


    node *temp;
    temp = head;

    if(head == NULL)
    {
        newnode = (node*)malloc(sizeof(node));
        newnode->data = value;
        newnode->next = NULL;
        head = newnode;

    }
    else
    {
        for(i = 1; i<=position-2; i++)
        {
            temp = temp->next;

        }
        newnode = (node*)malloc(sizeof(node));
        newnode->data = value;
        newnode->next = temp->next;
        temp->next = newnode;
    }


}

void insertValuePosition(int oldValue, int newValue)
{

    int i;


    node *temp;
    temp = head;

        while(!(oldValue == temp->data))
        {
            temp = temp->next;
        }


        newnode = (node*)malloc(sizeof(node));
        newnode->data = newValue;
        newnode->next = temp->next;
        temp->next = newnode;


        //printf("%d", temp->data);
    //}


}

void print()
{
    node *temp;
    temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

    printf("\n");
}

int main()
{
    head = NULL;

    insertByPosition(1, 100);
    insertByPosition(2, 200);
    insertByPosition(3, 300);
    insertByPosition(4, 400);
    print();

    insertValuePosition(100, 500);

    print();
    return 0;
}
