#include <iostream>
#include <vector>
using namespace std;
void enqueue(int d, int n,int queue[], int front, int rear)
{
    if ((front = 0) && (rear = n - 1) || (front = rear + 1))
    {
        cout << "Overflow"<<endl;

        return;

        
    }

    if (front == -1)

    {
        front = 0;
        rear = 0;
    }
    else
    {
        if (rear == n - 1)
        {
            rear = 0;
        }
        else
        {
            rear += 1;
        }
    }
    
    queue[rear] = d;
}
void print(int queue[],int n,int front,int rare)
{
    for (int i=front;i<=rear;i++)
    {
        cout<<queue[i]<<" ";
    }
    
}
int main()
{
    int n;
    cout << "Enter the size of the array: " << ends;
    cin >> n;
    int front=-1, rear=-1, queue[n];
    print(queue,n,front,rare);
    cout<<"after insertion"<<endl;
    enqueue(65,n,queue,front,rear);
    print(queue,n,front,rare);
    return 0;
}