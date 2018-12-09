#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};

typedef struct Node node;

node *root;

node* createNode(int value)
{
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void addLeftChild(node *parent, node *child)
{
    parent->left = child;

}

void addRightChild(node *parent, node *child)
{
    parent->right = child;
}

node* createTree()
{
    //Creating the parent nod 2
    node* two = createNode(2);

    //Creating the child node seven
    node* seven = createNode(7);
    node* nine = createNode(9);

    //adding the child of two
    addLeftChild(two, seven);
    addRightChild(two, nine);

    //Creating the child of seven
    node *one = createNode(1);
    node *six = createNode(6);

    //Adding the child of seven
    addLeftChild(seven, one);
    addRightChild(seven, six);

    //Creating the child of nine
    node* eight = createNode(8);
    node* five = createNode(5);

    //Adding the child of nine
    addLeftChild(nine, eight);
    addRightChild(nine, five);

    return two;
}

void preOrderTraversal(node* aNode)
{
    printf("%d ", aNode->data);
    if(aNode->left!= NULL)
    {
        preOrderTraversal(aNode->left);
    }

    if(aNode->right!= NULL)
    {
        preOrderTraversal(aNode->right);
    }
}


int main()
{
    node* root = createTree();
    preOrderTraversal(root);

    return 0;
}

