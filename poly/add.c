#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int coef;
    int power;
    struct node *next;
} node;

void insert(node **start, int c, int p)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->power = p;
    temp->coef = c;
    temp->next = *start;
    *start = temp;
}

void display(node *start)
{
    while (start != NULL)
    {
        printf("%dx%d + ", start->coef, start->power);
        start = start->next;
    }
    printf("\n");
}

void add(node *poly1, node *poly2, node **res)
{
    node *p1 = poly1;
    node *p2 = poly2;

    while (p1 != NULL)
    {
        int matched = 0;
        while (p2 != NULL)
        {
            // if power of poly1 is matched with a term of poly2
            if (p1->power == p2->power)
            {
                node *temp = (node *)malloc(sizeof(node));
                temp->power = p1->power;
                temp->coef = p1->coef + p2->coef;
                temp->next = *res;
                *res = temp;

                matched = 1;
                break;
            }
            p2 = p2->next;
        }
        // resetting the poly2 head
        p2 = poly2;

        // if power of poly1 is not matched with any term of poly2
        if (!matched)
        {
            node *temp = (node *)malloc(sizeof(node));
            temp->power = p1->power;
            temp->coef = p1->coef;
            temp->next = *res;
            *res = temp;
        }

        // moving to next term(node) of poly
        p1 = p1->next;
    }

    p1 = poly1;
    p2 = poly2;

    while (p2 != NULL)
    {
        int matched = 0;
        while (p1 != NULL)
        {
            if (p2->power != p1->power)
            {
                p1 = p1->next;
            }
            else
            {
                matched = 1;
                break;
            }
        }
        p1 = poly1;

        if (!matched)
        {
            node *temp = (node *)malloc(sizeof(node));
            temp->power = p2->power;
            temp->coef = p2->coef;
            temp->next = *res;
            *res = temp;
        }
        p2 = p2->next;
    }
}

int main()
{
    node *res = NULL;
    node *p1 = NULL;
    insert(&p1, 2, 2);
    insert(&p1, 3, 1);
    insert(&p1, 2, 4);
    display(p1);

    node *p2 = NULL;
    insert(&p2, 7, 3);
    insert(&p2, 3, 2);
    display(p2);

    add(p1, p2, &res);
    display(res);
    return 0;
}