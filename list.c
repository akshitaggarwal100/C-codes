#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *next;
    int data;
} node;

node *find(node *start, int key)
{
    while (start->next->data != key)
    {
        start = start->next;
    }
    if (start->next->data == key)
    {
        return start;
    }
    return NULL;
}

void insert(node **start, int key, int data)
{
    node *head = *start;
    node *add = (node *)malloc(sizeof(node));
    add->data = data;
    if (key == head->data)
    {
        add->next = head;
        *start = add;
        return;
    }
    else
    {
        node *prev = find(head, key);
        if (prev != NULL)
        {
            node *temp = prev->next;
            prev->next = add;
            add->next = temp;
        }
        else
        {
            printf("Key element not found\n");
        }
    }
}

void delete(node **start, int key)
{
    node *head = *start;
    if (head->data == key)
    {
        node *temp = head->next;
        free(*start);
        *start = temp;
    }
    else
    {
        node *prev = find(*start, key);
        if (prev != NULL)
        {
            node *temp = prev->next->next;
            free(prev->next);
            prev->next = temp;
        }
        else
        {
            printf("Element to be deleted not found");
        }
    }
}

void display(node *start)
{
    if (start == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while (start != NULL)
        {
            printf("%d\t", start->data);
            start = start->next;
        }
    }
}

void createList(node **start, int num)
{
    node *add = (node *)malloc(sizeof(node));
    add->data = num;
    add->next = *start;
    *start = add;
}

int main()
{
    node *head = NULL;
    createList(&head, 2);
    createList(&head, 6);
    insert(&head, 2, 5);
    insert(&head, 2, 9);
    insert(&head, 6, 19);
    delete (&head, 19);
    delete (&head, 9);
    display(head);
    return 0;
}