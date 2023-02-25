#include<iostream>
#include<vector>
using namespace std;
void insert(int arr[],int i,int n,int pos,int item)
{
    for(i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=item;
}
void print(int arr[],int i,int n)
{
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n;
    cout<<"Size:"<<ends;
    cin>>n;
    int arr[n],i,pos,item;
    cout<<"Enter elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements"<<endl;
    print(arr,i,n);
    cout<<"Enter the position where you want to insert"<<ends;
    cin>>pos;
    cout<<"Enter the data you want to insert"<<ends;
    cin>>item;
    insert(arr,i,n,pos,item);
    print(arr,i,n+1);
    return 0;
}