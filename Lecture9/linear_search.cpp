#include<iostream>
using namespace std;
bool search(int arr[],int n,int key)
{
  for(int i=0;i<n;i++)
  {
    if(arr[i]==key)
    return 1;
  }
return 0;
}
int main()
{
  int arr[10]={2,76,43,5,6,11,23,9,8,45};
  int key;
  cout<<"Enter key"<<endl;
  cin>>key;
  bool found= search(arr,10,key);
  if(found)
  {
    cout<<"Found"<<endl;
  }
  else {
    cout<<"Not found"<<endl;
  }
}