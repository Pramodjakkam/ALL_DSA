#include <iostream>
#include <vector>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

void insert(node *h, int v)
{
    node *tmp = h;

    while (tmp->next)
        tmp = tmp->next;
    node *newnode = new node;
    newnode->data =v;
    newnode->next = NULL;
    tmp->next = newnode;
}

int main()
{
    node *head = NULL;
    head = new node;
    if (head == NULL)
    {
        printf("The hero and the villan");
        return 1;
    }
    head->data = 3;
    head->next = NULL;

    node *p = NULL;

    insert(head, 5);
    int i = 0;
    while (i < 5)
    {
        insert(head, i++);
    }

    p = head;

    while (p)
    {
        printf("%d\n", p->data);
        p = p->next;
    }

    return 0;
}
