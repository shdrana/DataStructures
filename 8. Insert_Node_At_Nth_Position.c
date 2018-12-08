#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

node *newnode, *head;



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

    InsertNth(1, 100);
    //print();
    InsertNth(2, 200);
    //print();
    InsertNth(3, 300);
    //print();
    InsertNth(4, 400);
    //print();
    InsertNth(2, 900);
    print();
    return 0;
}
