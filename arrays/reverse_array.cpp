#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[10],i;
    cout<<"Enter elements"<<endl;
    for(i=0;i<6;i++)
    {
        cin>>a[i];
    }
    cout<<"The correct order"<<endl;
    for(i=0;i<6;i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<"The reverse order"<<endl;
    for(i=5;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}