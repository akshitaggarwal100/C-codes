#include <stdio.h>
#include <stdlib.h>
#define MAX 3

typedef struct queue
{
    int array[MAX + 1];
    int front;
    int rear;
} queue;

void createEmptyQ(queue *q)
{
    q->front = -1;
    q->rear = -1;
}

int isFull(queue *q)
{
    if (q->front == 0 && q->rear == MAX)
    {
        return 1;
    }
    else if (q->rear + 1 == q->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(queue *q)
{
    if (q->front == -1 && q->rear == -1)
    {
        return 1;
    }
    else
        return 0;
}

void insert(queue *q, int data)
{
    if (isFull(q))
    {
        printf("Queue overflow\n");
    }

    else if (q->front == -1 && q->rear == -1)
    {
        q->front++;
        q->rear++;
        q->array[q->rear] = data;
    }

    else
    {
        if (q->rear == MAX)
        {
            q->rear = 0;
            q->array[q->rear] = data;
        }
        else
        {
            q->rear++;
            q->array[q->rear] = data;
        }
    }
}

void delete(queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue underflow\n");
    }

    else
    {
        if (q->front == q->rear)
        {
            q->front = -1;
            q->rear = -1;
        }
        else if (q->front == MAX)
        {
            q->front = 0;
        }
        else
        {
            q->front++;
        }
    }
}

void display(queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }
    int i = q->front;
    while (i != q->rear)
    {
        printf("%d\t", q->array[i]);
        if (i == MAX)
            i = 0;
        else
            i++;
    }
    printf("%d\t\n", q->array[i]);
    printf("Front: %d\n", q->front);
    printf("Rear: %d\n", q->rear);
}

void display_array(queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }
    if (q->front <= q->rear)
    {
        for (int i = 0; i <= MAX; i++)
        {
            if (i < q->front || i > q->rear)
            {
                printf("_, ");
            }
            else
            {
                printf("%d, ", q->array[i]);
            }
        }
    }
    else
    {
        for (int i = 0; i <= MAX; i++)
        {
            if (i > q->rear && i < q->front)
            {
                printf("_, ");
            }
            else
            {
                printf("%d, ", q->array[i]);
            }
        }
    }
    printf("\n");
}

int main()
{
    queue *q1 = (queue *)malloc(sizeof(queue));
    createEmptyQ(q1);
    insert(q1, 1);
    insert(q1, 2);
    insert(q1, 3);
    insert(q1, 4);
    delete (q1);
    insert(q1, 5);
    delete(q1);
    delete(q1);
    display_array(q1);
    return 0;
}