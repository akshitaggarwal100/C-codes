#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int arr[10];
    int top;
} stack;

void createStack(stack *st)
{
    st->top = -1;
}

void push(stack *st, int num)
{
    if (st->top >= 9)
    {
        printf("Stack overflow\n");
    }
    else
    {
        st->top++;
        st->arr[st->top] = num;
    }
}

int pop(stack *st)
{
    if (st->top < 0)
    {
        printf("Stack underflow");
        return -1;
    }
    else
    {
        int temp = st->arr[st->top];
        st->top--;
        return temp;
    }
}

void display(stack *st)
{
    if (st->top < 0)
    {
        printf("Stack underflow");
    }
    else
    {
        for (int i = st->top; i >= 0; i--)
        {
            printf("%d\n", st->arr[i]);
        }
    }
}

int main()
{
    stack *st = (stack *)malloc(sizeof(stack));
    createStack(st);
    push(st, 2);
    push(st, 5);
    push(st, 8);
    printf("%d\n\n", pop(st));
    display(st);
    return 0;
}