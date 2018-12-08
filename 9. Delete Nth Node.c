#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

node *newnode, *head;

int totalNode = 0;

void DeleteNthNode(int position)
{


    int i;


    node *temp;
    temp = head;


    for(i = 1; i<=position-2; i++)
    {
        temp = temp->next;

    }

    node *temp1, *temp2;
    temp1 = temp;

    temp = temp->next;

    temp2 = temp->next;

    temp1->next = temp2;
    //printf("temp1 and temp1: %d %d\n", temp1->data, temp2->data);
}


void InsertNth(int position, int value)
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

void print()
{
    totalNode = 0;
    node *temp;
    temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        totalNode++;
    }

    printf("\n");
    printf("Total Node: %d\n", totalNode);
}

int main()
{
    head = NULL;

    InsertNth(1, 100);
    //print();
    InsertNth(2, 200);
    //print();
    InsertNth(3, 300);
    //print();
    InsertNth(4, 400);
    //print();
    InsertNth(5, 500);
    print();


    DeleteNthNode(3);
    print();
    DeleteNthNode(2);
    print();
    return 0;
}
