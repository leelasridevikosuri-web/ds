#include <stdio.h>

void main()
{
    struct node
    {
        int data;
        struct node *link;
    };

    struct node a;
    a.data = 3;
    a.link = NULL;

    struct node b;
    b.data = 5;
    b.link = NULL;

    a.link = &b;

    printf("%d ", a.data);
    printf("%d ", a.link->data);
}
