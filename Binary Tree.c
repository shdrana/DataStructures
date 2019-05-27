#include <stdio.h>
#include <stdlib.h>

/**
    Binary Tree Implementation
    @author Sohid Ullah
    @since 2019.05.26

      --2--
    /      \
    7       9
    / \      \8
    1  6     / \
       / \   3  4
       5  10

**/

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

typedef struct Node Node;

Node *createNode(int item)
{
    Node *newNode = (Node*)malloc(sizeof(Node));

    if(newNode == NULL)
    {
        printf("Error! Couldn't create new node\n");
        exit(1);
    }

    newNode->data = item;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void addLeftChild(Node *node, Node *child)
{
    printf("%d\n" , child->data);
    node->left = child;


}

void addRightChild(Node *node, Node *child)
{
    node->right = child;
}

Node *createTree()
{
    Node *two = createNode(2);
    Node *seven = createNode(7);
    Node *nine = createNode(9);

    addLeftChild(two, seven);
    addRightChild(two, nine);

    Node *one = createNode(1);
    Node *six = createNode(6);

    addLeftChild(seven, one);
    addRightChild(seven, six);

    Node *five = createNode(5);
    Node *ten = createNode(10);

    addLeftChild(six, five);
    addRightChild(six, ten);

    Node *eight = createNode(8);
    addRightChild(nine, eight);

    Node *three = createNode(3);
    Node *four = createNode(4);

    addLeftChild(eight, three);
    addRightChild(eight, four);

    return two;
}

void preOrder(Node *node)
{
    printf("%d ", node->data);

    if(node->left!= NULL){
        preOrder(node->left);
    }

    if(node->right!= NULL){
        preOrder(node->right);
    }

}

void postOrder(Node *node)
{
    if(node->left!= NULL){
        postOrder(node->left);
    }

    if(node->right!= NULL){
        postOrder(node->right);
    }

    printf("%d ", node->data);

}

void inOrder(Node *node)
{
    if(node->left!= NULL){
        inOrder(node->left);
    }

    printf("%d ", node->data);

    if(node->right!= NULL){
        inOrder(node->right);
    }

}

int main()
{
    Node *root = createTree();
    printf("Pre-order: ");
    preOrder(root);
    printf("\n");

    printf("Post order: ");
    postOrder(root);
    printf("\n");

    printf("In order: ");
    inOrder(root);
    printf("\n");


    return 0;
}
