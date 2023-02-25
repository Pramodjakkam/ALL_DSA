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
int deleteatbeg()
{
    struct node*p=new node;
    p=head;
    head=head->next;
    delete(p);
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
    // cout<<"Linked list after insertion at the beginning"<<endl;
    // insertatbeg(12);
    // ok();
    cout<<"Deletion at the beginning of linked list"<<endl;
    deleteatbeg();
    ok();
    return 0;
}