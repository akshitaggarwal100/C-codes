#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *right;
    struct node *left;
    int data;
} node;

void createList(node **start, int num)
{
    *start = (node *)malloc(sizeof(node));
    (*start)->data = num;
    (*start)->left = NULL;
    (*start)->right = NULL;
}

node *find(node *start, int key)
{
    while (start->right != NULL)
    {
        if (start->right->data == key)
        {
            return start;
        }
        else
        {
            start = start->right;
        }
    }
    return NULL;
}

void insert(node **start, int key, int num)
{
    node *add = (node *)malloc(sizeof(node));
    add->data = num;
    if (key == (*start)->data)
    {
        add->right = *start;
        add->left = NULL;
        *start = add;
    }
    else
    {
        node *prev = find(*start, key);
        if (prev != NULL)
        {
            add->right = prev->right;
            add->left = prev;
            prev->right->left = add;
            prev->right = add;
        }
        else
        {
            printf("Key element not found\n");
        }
    }
}

void display(node *start)
{
    if (start != NULL)
    {
        while (start != NULL)
        {
            printf("%d\t", start->data);
            start = start->right;
        }
    }
    else
    {
        printf("List is empty\n");
    }
}

void delete(node **start, int key)
{
    if (*start == NULL)
    {
        printf("List is empty\n");
    }
    else if ((*start)->data == key)
    {
        node *temp = (*start)->right;
        free(*start);
        *start = temp;
    }
    else
    {
        node *prev = find(*start, key);
        if (prev != NULL)
        {
            node *temp = prev->right->right;
            free(prev->right);
            prev->right = temp;
            prev->right->left = prev;
        }
        else
        {
            printf("Key element is not found\n");
        }
    }
}

int main()
{
    node *head = NULL;
    createList(&head, 7);
    insert(&head, 7, 2);
    insert(&head, 7, 4);
    delete (&head, 2);
    insert(&head, 7, 2);
    // printf("%d\n", find(head, 2));
    display(head);
    return 0;
}