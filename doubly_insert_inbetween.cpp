#include <iostream>
#include <vector>
using namespace std;
struct node
{
    node *next;
    node *pre;
    int data;
};
struct node *head = new node;
void insertinbetween(int d, int bef)
{
    struct node *p = new node;
    p = head;
    struct node *q = new node;
    q->data = d;
    if (p->data == bef)
    {
        q->next = p;
        q->pre = NULL;
        p->pre = q;
        head = q;
    }
    else
    {
        while (p->data != bef)
        {
            p = p->next;
        }
        q->next = p->next;
        q->pre = p;
        p->next = q;
    }
}
void insertatend(int d)
{
    struct node *p = new node;
    p = head;
    struct node *q = new node;
    q->data = d;
    q->next = NULL;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = q;
    q->pre = p;
}
void insertatbeg(int d)
{
    struct node *q = new node;
    q->data = d;
    q->pre = NULL;
    q->next = head;
    head->pre = q;
    head = q;
}
void ok()
{
    struct node *p = new node;
    p = head;
    // struct node *q=new node;
    // q=p->next;
    // q->pre=p;
    // p->pre=NULL;
    // while(q->next!=NULL)
    // {
    //     cout<<p->data<<endl;
    //     p=p->next;
    //     q=q->next;
    // }
    // cout<<p->data<<endl;
    // q->pre=p;
    // p->next=q;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}
int main()
{
    struct node *second = new node;
    struct node *third = new node;
    struct node *fourth = new node;
    head->data = 45;
    head->pre = NULL;
    head->next = second;
    second->data = 65;
    second->pre = head;
    second->next = third;
    third->data = 78;
    third->next = fourth;
    third->pre = second;
    fourth->data = 22;
    fourth->pre = third;
    fourth->next = NULL;
    cout << "Doubly Linked list Traversal" << endl;
    ok();
    cout << "Enter element to be insert: " << ends;
    int a, b, c,d, e;
    cin >> a;
    cout << "-----------------" << endl;
    cout << "Enter the element after which you want to insert" << endl;
    cin >> b;
    cout << "-----------------" << endl;
    insertinbetween(a, b);
    ok();
    cout << "Enter element to be insert: " << ends;
    cin >> c;
    cout << "-----------------" << endl;
    cout << "Enter the element after which you want to insert" << endl;
    cin >> d;
    cout << "After insertion" << endl;
    insertinbetween(c,d);
    ok();
    // cout << "Insert again" << endl;
    // cin >> b;
    // cout<<"-----------------"<<endl;
    // insertatend(b);
    // ok();
    // cout << "Insert again" << endl;
    // cin >> c;
    // cout<<"-----------------"<<endl;
    // insertatend(c);
    // ok();
    // cout << "Insert again at start" << endl;
    // cin >> e;
    // cout<<"-----------------"<<endl;
    // insertatbeg(e);
    // ok();
    return 0;
}