#include <iostream>
#include <vector>
using namespace std;
class queue
{
private:
    int data;
    int front;
    int rear;

public:
    queue();
    void enqueue();
    int dequeue();
    int size;
    void display();
    boel isempty();
    boel isfull();
};
queue::queue()
{
    front = 0;
    rear = -1;
}
void queue::enqueue(int data)
{
    rear += 1;
    arr[rear] = data;
}
int queue::dequeue()
{
    front += 1;
    return arr[front];
}
void queue::display()
{
    if (!this->isempty())
    {
        for (int i = front + 1; i < rear; i++)
        {
            cout << arr[i] << endl;
        }
    }
    else
    {
        cout << "Queue Underflow" << endl;
    }
}
int queue::size()
{
    return (rear - front + 1);
}
bool queue::isempty()
{
    if (front > rear)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool queue::isfull()
{
    if (front == rear)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int arr[5];
    queue q;

    q.isempty();

    return 0;
}