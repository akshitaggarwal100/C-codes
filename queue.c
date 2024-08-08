#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int arr[10];
    int front;
    int rear;
} queue;

void createQ(queue *q)
{
    q->front = -1;
    q->rear = -1;
}

void enq(queue *q, int num)
{
    if (q->rear > 9)
    {
        printf("Queue overflow\n");
    }
    else
    {
        if (q->rear == -1)
        {
            q->rear++;
            q->front++;
        }
        else
        {
            q->rear++;
        }
        q->arr[q->rear] = num;
    }
}

int deq(queue *q)
{
    if (q->front == -1)
    {
        printf("Queue underflow\n");
    }
    else
    {
        q->front++;
        if (q->front > q->rear)
        {
            q->front = -1;
            q->rear = -1;
        }
    }
}

void display(queue *q)
{
    if (q->front < 0)
    {
        printf("Queue is empty");
    }
    else
    {
        for (int i = q->front; i <= q->rear; i++)
        {
            printf("%d\t", q->arr[i]);
        }
    }
}

int main()
{
    queue *q = (queue *)malloc(sizeof(queue));
    createQ(q);
    enq(q, 2);
    enq(q, 3);
    enq(q, 7);
    deq(q);
    deq(q);
    deq(q);
    deq(q); // queue underflow
    display(q); // queue is empty
    return 0;
}