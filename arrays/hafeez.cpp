#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,j,n;
    // cout<<"Enter no of ele"<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // output 
    // cout<<"The sorted "<<endl;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}