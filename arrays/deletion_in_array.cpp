//deletion in arrays 
#include<iostream>
using namespace std;
void Delete(int a[],int n,int pos)
{
    for(int i=pos;i<n;i++)
    {
            a[i]=a[i+1];
    }
}
void print(int n,int a[])
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n,i,pos;
    cout<<"Enter number of elements of array: "<<ends;
    cin>>n;
    int a[n];
    cout<<"Enter elements of array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter position where you want to delete: "<<ends;
    cin>>pos;
    print(n,a);
    cout<<"------------------"<<endl;
    Delete(a,n,pos);
    print(n-1,a);
    return 0;
}