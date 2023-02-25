#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    
};
void GetLinkedList(Node *ptr);
void InsertionAtBeg(Node *ptr,int d);
int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;
    head= new Node;
    second= new Node;
    third= new Node;
    fourth = new Node;
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=NULL;
    cout<<"Linked List before Insertion : "<<endl;
   GetLinkedList(head);
  InsertionAtBeg(head,0);
   return(0);
}
void GetLinkedList(Node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
void InsertionAtBeg(Node *ptr,int d)
{
    Node *p;
    p=new Node;
  p->next=ptr;
 p->data=d;
 cout<<" Linked List after Insertion : "<<endl;
GetLinkedList(p);

}
