#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string a[7]={'JAVA','PYTHON','JAVA','DATASCIENCE','JAVA','DATASTRUCT'};
    int i,count=0;
    string req;
    cout<<"Enter string"<<endl;
    cin>>req;
    for(i=0;i<7;i++)
    {
        cout<<a[i]<<endl;
    }
    for(i=0;i<7;i++)
    {
        if(a[i]==req)
        {
            count++;
        }
    }
    cout<<req<<"is repeated"<<count<<"times"<<endl;
    return 0;
}