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
    p->next=head;
    head=p;


}
int insertatend(int d)
{
    struct node*p=new node;
    p->data=d;
    p->next=NULL;
    struct node*q=new node;
    q=head;
    while(q->next!=NULL)
    {
        q=q->next;
    }
    q->next=p;
    
}
int ok()
{
    node *ptr=new node;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
       
    }
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
    fourth->next=NULL;
    cout<<"Linked list before insertion"<<endl;
    ok();
    cout<<"Inserting at the beginning"<<endl;
    insertatbeg(0);
    cout<<"Linked list after insertion at the Ending"<<endl;
    insertatend(99);
    ok();
    return 0;
}