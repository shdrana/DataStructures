#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack[MAX];
int top = -1;

int push(int data)
{
    if(top==MAX)
    {
        printf("Stack is full\n");
        return;
    }
    stack[++top] = data;
}

int pop()
{
    if(top == -1)
    {
        printf("Stack is empty!!");
        return -1;
    }

    return stack[top--];
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(40);
    push(40);
    push(40);

    printf("%d\n", pop());




    return 0;
}
