#include<iostream>
using namespace std;
struct node
{
    node *next;
    int data;

};
struct node* head=new node;
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
    ok();
    return 0;
}