#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *Left,*Right;
};
Node *Root=NULL,*LOC=NULL, *PAR=NULL;
void find(int item)
{
    Node *PTR=NULL,*PARPTR=NULL;
if(Root==NULL)
{
    LOC=NULL;
    PAR=NULL;
    return;
}
if(Root->data==item)
{
    LOC=Root;
    PAR=NULL;
    return;
}
if(Root->data>item)
{
    PTR=Root->Left;
    PARPTR=Root;
}
else
{
    PTR=Root->Right;
    PARPTR=Root;
}
while(PTR!=NULL)
{
    if(PTR->data==item)
    {
        LOC=PTR;
        PAR=PARPTR;
        return;
    }
    if(PTR->data>item)
    {
        PARPTR=PTR;
        PTR=PTR->Left;
    }
    else
    {
        PARPTR=PTR;
        PTR=PTR->Right;
    }
}
LOC=NULL;
PAR=PARPTR;
}
void insert(int item)
{
    find(item);
    if(LOC!=NULL)
    {
    cout<<item<<" already exist";
    return;
        
    }
    Node *newNode=new Node;
    newNode->data=item;
    newNode->Left=NULL;
    newNode->Right=NULL;
    if(PAR!=NULL)
    {
        if(PAR->data>item)
        {
            PAR->Left=newNode;
        }
        else
        PAR->Right=newNode;
    }
    else
    Root=newNode;
        
    }
    void preorder(Node *R)
    {
        if(R!=NULL)
        {
            cout<<R->data<<",";
            preorder(R->Left);
            preorder(R->Right);
        }
    }
int main()
{
    insert(26);
    insert(40);
    insert(10);
    insert(47);
    insert(30);
    insert(76);
    preorder(Root);
    return 0;
}