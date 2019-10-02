#include <stdio.h>
#include <stdlib.h>

/**
    Binary Search Tree Implementation
    @Author Sohid Ullah
    @Since 2019-05-27
**/

struct Node
{
    int data;
    struct Node *parent;
    struct Node *left;
    struct Node *right;

};

typedef struct Node Node;

Node *createNode(int item)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL)
    {
        printf("Error Creating node\n");
        exit(1);
    }

    newNode->data = item;
    newNode->parent = NULL;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void addLeftChild(Node *node, Node *child)
{
    node->left = child;
    if(child != NULL)
    {
        child->parent = node;
    }
}

void addRightChild(Node *node, Node *child)
{
    node->right = child;
    if(child != NULL)
    {
        child->parent = node;
    }
}

Node *bstInsert(Node *root, Node *node)
{
    Node *parentNode, *currentNode;
    if(root == NULL)
    {
        root = node;
    }

    currentNode = root;

    while(currentNode!= NULL)
    {
        parentNode = currentNode;
        if(node->data<currentNode->data)
        {
            currentNode = currentNode->left;
        }
        else
        {
            currentNode = currentNode->right;
        }

    }

    if(node->data<parentNode->data)
    {
        addLeftChild(parentNode, node);
    }
    else
    {
        addRightChild(parentNode, node);
    }

    return root;
}

Node *createBST()
{
    Node *root, *node;

    int i;

    int arr[] = {5, 17, 3, 7, 12, 19, 1, 4};

    root = createNode(10);

    for(i = 0; i<8; i++)
    {
        node = createNode(arr[i]);
        root = bstInsert(root, node);
    }
    return root;
}

void inOrder(Node *node)
{
    /**
        in binary search tree in order all data will be printed in
        sorted order
    **/

    if(node->left!= NULL)
    {
        inOrder(node->left);
    }
    printf("%d ", node->data);

    if(node->right!= NULL)
    {
        inOrder(node->right);
    }

}

Node *bstSearch(Node *root, int item)
{
    Node *node = root;

    while(node!= NULL)
    {
        if(node->data == item)
        {

            return node;
        }
        if(node->data>item)
        {
            node = node->left;
        }
        else
        {
            node = node->right;
        }
    }

}

int main()
{
    Node *root = createBST();

    Node *node = bstSearch(root, 100);
    if(node!= NULL){
        printf("%d", node->data);
    }
    else{
        printf("Node Not Found\n");
    }




    return 0;
}

