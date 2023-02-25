#include<iostream>
using namespace std;
class node
{
public:
int data;
node *next;
public :
void op(node *ptr)
{
    while(ptr->next!=NULL)
{    cout<<ptr->data;
    ptr=ptr->next;
}
}
};
int main()
{
    node *head;
    head=new node;
    node *second;
    second=new node;
    node *third;
    third=new node;
    node *fourth;
    fourth=new node;
    head->data=11;
    head->next=second;
  second->data=22;
    second->next=third;
     third->data=33;
    third->next=fourth;
    fourth->data=44;
    fourth->next=NULL;
    
head->op(head);
return(0);
}