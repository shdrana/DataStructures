#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

node *newnode, *head;

void SearchByValue(int value)
{

    node *temp;
    temp = head;

    while(temp!= NULL)
    {
        if(temp->data == value)
        {
            printf("Value found\n");
            break;
        }
        temp = temp->next;

    }

    printf("The value is %d\n", temp->data);
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

    printf("Input a value to search: \n");
    scanf("%d", &value);

    SearchByValue(value);



    return 0;
}
