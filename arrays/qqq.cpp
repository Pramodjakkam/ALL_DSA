#include <iostream>
#include <vector>
using namespace std;

void enqueue(int d, int n, int queue[], int &front, int &rear)
{
    if ((front == 0 && rear == n - 1) || (front == rear + 1))
    {
        cout << "Overflow" << endl;
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
    cout << rear << endl;
    queue[rear] = d;
}

void display(int n, int queue[], int &front, int &rear)
{
    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }
    cout << "Front: " << front << endl;
    cout << "Rear: " << rear << endl;
}

int main()
{
    int n = 7;
    // cout << "Enter the size of the array: " << endl;
    // cin >> n;
    int front = -1, rear = -1, queue[n];
    enqueue(65, n, queue, front, rear);
    enqueue(32, n, queue, front, rear);
    // enqueue(2, n, queue, front, rear);
    // enqueue(76, n, queue, front, rear);
    // enqueue(87, n, queue, front, rear);
    // enqueue(7, n, queue, front, rear);
    // enqueue(66, n, queue, front, rear);
    // enqueue(98, n, queue, front, rear);
    display(n, queue, front, rear);
    return 0;
}