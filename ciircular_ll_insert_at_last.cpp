#include<iostream>
using namespace std;
struct node
{
    node *next;
    int data;

};
struct node* head=new node;
int insertatbeg(int d)
{
    struct node *p=new node;
    p->data=d;
    struct node* q=new node;
    q=head;
    while(q->next!=head)
    {
        q=q->next;
    }
    q->next=p;
    p->next=head;
    head=p;
}
int insertatend(int d)
{
    struct node*p=new node;
    p->data=d;
    struct node *q=new node;
    q=head;
    while(q->next!=head)
    {
        q=q->next;
    }
    q->next=p;
    p->next=head;

}
int ok()
{
    node *ptr=new node;
    ptr=head;
    do
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
       
    }while(ptr!=head);
}

int main()
{
    struct node *second=new node;
    struct node *third=new node;
    struct node *fourth=new node;
    head->data=45;
    head->next=second;
    second->data=65;
    second->next=third;
    third->data=78;
    third->next=fourth;
    fourth->data=22;
    fourth->next=head;
    cout<<"Circular linked list before insertion at the Ending"<<endl;
    ok();
    int d;
    cout<<"Enter a value to insert"<<endl;
    cin>>d;
    cout<<"Circular linked list after insertion at the Ending"<<endl;
    // insertatbeg(d);
    insertatend(d);
    ok();
    return 0;
}