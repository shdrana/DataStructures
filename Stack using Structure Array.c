#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK 5

struct Stack
{
    int data[MAX_STACK];
    int top;
};

typedef struct Stack Stack;

void push(Stack *stack, int item)
{
    if(stack->top<MAX_STACK)
    {
        stack->data[stack->top++] = item;
    }
    else
    {
        printf("Stack is full\n");
    }
}

int pop(Stack *stack)
{
    stack->top--;
    if(stack->top == -1)
    {
        printf("Stack is Empty!\n");
        return -1;
    }
    int item = stack->data[stack->top];

    return item;
}

int main()
{
    Stack stack;
    stack.top = 0;

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);
    push(&stack, 50);


    printf("%d\n", pop(&stack));
    printf("%d\n", pop(&stack));
    printf("%d\n", pop(&stack));



    return 0;
}
