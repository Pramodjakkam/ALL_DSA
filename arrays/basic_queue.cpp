#include<iostream>
using namespace std;
struct node
{
    int front;
    int rear;
    int * queue;
};
  struct node * q=new struct node;
    q->front=-1;
    q->rear=-1;
    q->queue=new int(5);

void enqueue(int queue[],int data,int front ,int rear)
{
    if((front==0 && rear == 4) || (front=rear+1))
    {
        cout<<"overflow"<<endl;
    }
    else if(front=-1)
    {
        front=0;
        rear=0;
    }
    else {if(rear=4)
    {
        rear=0;
    }
    else
    {
        rear++;
    }}
    queue[rear]=data;
        
}
void dequeue(struct node arr[],int front,int rear)
{
    if(front== -1 )
    {
        cout<<"underflow"<<endl;
        exit(0);
    }
    else if(front ==rear)
    {
      front=-1;
      rear=-1;
    }
    else if(front == 4)
    {
    front=0;
    }
    else 
    {
        front++;
    }

}


void print(struct node * q)
{
    cout<<q->queue[q->front]<<"  "<<q->queue[q->rear]<<endl;
}
int main()
{
  
enqueue(q->queue,20,q->front,q->rear);
enqueue(q->queue,30,q->front,q->rear);
print(q);
dequeue(q,q->front,q->rear);
enqueue(q->queue,10,q->front,q->rear);
dequeue(q,q->front,q->rear);
print(q);
dequeue(q,q->front,q->rear);
print(q);

}