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
    cout<<"Linked list after insertion at the beginning"<<endl;
    insertatbeg(12);
    ok();
    return 0;
}

// #include<iostream>
// using namespace std;
// struct node
// {
//     int data;
//     struct node * next;
    
// };
// struct node * start=new struct node;
// void insertatstart(int item)
// {
//     node * st = new node;
//     st ->data = item;
//     st->next=start;
//     start=st;
// }
// void insertatend(struct node * head, int data)
// {
//     struct node * ptr= new struct node ;
    
// }
// int main()
// {
//     struct node * head= new node;
//     head->data=45;
// }

