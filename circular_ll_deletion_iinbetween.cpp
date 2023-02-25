// here this is circular linked list
#include <iostream>
using namespace std;
struct node
{
    node *next;
    int data;
};
struct node *head = new node;
int insertatbeg(int d)
{
    struct node *p = new node;
    p->data = d;
    struct node *q = new node;
    q = head;
    while (q->next != head)
    {
        q = q->next;
    }
    q->next = p;
    p->next = head;
    head = p;
}
int insertatend(int d)
{
    struct node *p = new node;
    p->data = d;
    struct node *q = new node;
    q = head;
    while (q->next != head)
    {
        q = q->next;
    }
    q->next = p;
    p->next = head;
}
int insertafter(int d, int item)
{
    struct node *p = new node;
    p->data = d;
    struct node *q = new node;
    q = head;
    while (q->data != item)
    {
        q = q->next;
    }
    p->next = q->next;
    q->next = p;
}
int deleteatbeg()
{
    struct node *q = new node;
    q = head;
    struct node *p = new node;
    p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = head->next;
    head = head->next;
    delete (q);
}
int deleteafter(int item)
{
    struct node *p = new node;
    p = head;
    if (p->data = item)
    {
        struct node *r = new node;
        r = head;
        while (r->next != head)
        {
            r = r->next;
        }
        head = head->next;
        r->next = head;
        delete (p);
    }
    else
    {

        struct node *q = new node;
        q = p->next;
        while (q->data != item)
        {
            p = p->next;
            q = q->next;
        }
        p->next = q->next;
        delete (q);
    }
}
int ok()
{
    node *ptr = new node;
    ptr = head;
    do
    {
        cout << ptr->data << endl;
        ptr = ptr->next;

    } while (ptr != head);
}

int main()
{
    struct node *second = new node;
    struct node *third = new node;
    struct node *fourth = new node;
    head->data = 45;
    head->next = second;
    second->data = 65;
    second->next = third;
    third->data = 78;
    third->next = fourth;
    fourth->data = 22;
    fourth->next = head;
    cout << "Circular linked list before deletion " << endl;
    ok();
    cout << "Circular linked list after Deletion " << endl;
    // insertatbeg(d);
    // insertatend(d);
    // insertafter(d,c);
    // deleteatbeg();
    int n;
    cout << "Enter element to be deleted:" << ends;
    cin >> n;
    cout << "after deletion" << endl;
    deleteafter(n);
    ok();
    return 0;
}