#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

node *newnode, *head;

void SerchbyNode(int myNode)
{
    int nodeNumber = 0;

    node *temp;
    temp = head;

    while(temp!= NULL)
    {
        nodeNumber++;
        if(nodeNumber == myNode)
        {
            printf("Node found\n");
            break;
        }
        temp = temp->next;

    }

    printf("The value of %dth node is %d\n", myNode, temp->data);
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
    int i,n,myNode;

    insert_infront(10);
    insert_infront(20);
    insert_infront(30);
    insert_infront(40);
    insert_infront(50);
    print();

    printf("Input a value to search: \n");
    scanf("%d", &myNode);

    SerchbyNode(myNode);




    return 0;
}
