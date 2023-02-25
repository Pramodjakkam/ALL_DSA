#include <iostream>
using namespace std;
int arr[5];
int data, top;
stack()
{
    top = -1;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 0;
    }
}
bool isfull()
{
    if (top == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(int d)
{
    if (isfull())
    {
        cout << "Stack is overflow" << endl;
    }
    else
    {
        top++;
        arr[top] = d;
        cout << arr[top] << endl;
    }
}
void pop()
{
    if (isEmpty)
    {
        cout << "sorry no element to delete" << endl;
    }
    else
    {
        top = top - 1;
    }
}
int main()
{

    isEmpty();
    isfull();
    stack();
    // pop();
    push(6);
    push(56);
    push(12);
    push(100);
    pop();

    return 0;
}