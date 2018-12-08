#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;

};

typedef struct Node node;

node *newnode, *head;
int totalvalue;

void DeletebyValue(int value)
{
    int nodeNumber = 0;

    node *temp, *temp1;
    temp = head;

    if(head->data == value)
    {
        head = head->next;
    }

    else
    {
        while(temp!= NULL)
        {
            if(temp->next->data == value)
            {
                break;
            }
            temp = temp->next;

        }
        temp1 = temp;
        temp = temp->next;
        temp1->next = temp->next;



    }



}


void Sum()
{
    node *temp;
    temp = head;
    totalvalue = 0;

    while(temp!= NULL)
    {
        totalvalue+= temp->data;
        temp = temp->next;

    }

    printf("Total Value: %d\n", totalvalue);

}

void insert_infront(int value)
{

    if(head == NULL)
    {
        //    print("HI");
        newnode=(node*)malloc(sizeof(node));
        newnode->data=value;
        newnode->next=NULL;
        head=newnode;
    }
    else
    {
        newnode=(node*)malloc(sizeof(node));
        newnode->data=value;
        newnode->next = NULL;
        newnode->next=head;
        head=newnode;
    }
}

void print()
{
    node *temp;
    temp = head;
    while(temp!= NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

    printf("\n");
}

int main()
{
    head = NULL;
    int i,n,value;

    insert_infront(10);
    insert_infront(20);
    insert_infront(30);
    insert_infront(40);
    insert_infront(50);
    print();

    //printf("Input a value to search: \n");
    //scanf("%d", &value);

   // DeletebyValue(value);

    //print();

    Sum();
    return 0;
}
