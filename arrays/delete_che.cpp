#include<iostream>
using namespace std;
void deletion(int arr[],int size,int element,int index)
{
    for(int i=index;i<size-1;i++)
    {
         arr[i]=arr[i+1];
    }
    cout<<" array after deletion is : "<<endl;
    size--;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
  int size,index,element;
  cout<<" enter the size of the array : "<<endl;
  cin>>size;
  int array[size];
  cout<<" enter the elements of the array : "<<endl;
  for(int i=0;i<size;i++)
  {
      cin>>array[i];
  }
  cout<<" enter the element to delete from the array : "<<endl;
  cin>>element;
  for(int i=0;i<size;i++)
  {
      if(array[i]==element)
      {
          index=i;
      }
  }
  deletion(array,size,element,index);
  return(0);
}