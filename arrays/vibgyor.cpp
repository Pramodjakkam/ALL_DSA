#include<iostream>
#include<vector>
using namespace std;
// 'V','I','B','G','Y','O','R'
int main()
{  
    char a[7]={'V','I','B','G','Y','O','R'};
    int count=0;
    char del;
    cout<<"The elements of the array"<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Enter a element which you want to delete"<<endl;
    cin>>del;
    for(int i=0;i<7;i++)
    {
        if(a[i]==del)
        {
            for(int j=i;j<6;j++)
            {
                a[j]=a[j+1];
            }
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"Color not found"<<endl;
        exit(1);
    }
    else
    {
        cout<<"The new array"<<endl;
        for(int i=0;i<6;i++)
        {
            cout<<a[i]<<endl;
        }
    }
    return 0;
    
}

// your name is "jafer ali"