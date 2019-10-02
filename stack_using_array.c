#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack[MAX];
int top = -1;

int push(int data)
{
    top++;
    if(top==MAX)
    {
        printf("Stack is full: ");
        return sizeOfStack()-1;
    }
    stack[top] = data;
    return sizeOfStack();
}

int pop()
{
    if(top == -1)
    {
        printf("Stack is empty: ");
        return sizeOfStack();
    }
    return stack[top--];
}

int sizeOfStack()
{
    return top+1;
}

int main()
{
    push(10);

    printf("%d\n", pop());
    printf("%d\n", pop());





    return 0;
}
