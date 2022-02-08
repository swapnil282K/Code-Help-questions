#include<iostream>
using namespace std;
void print(int arr[],int n)
{
for(int i=0;i<n;i++)
{
  cout<<arr[i]<<" ";
}
cout<<endl;
}
void sort01(int arr[],int n)
{
  int i=0;
  int j=n-1;
  while(i<j)
  {
    while(arr[i]==0)
    {
      i++;
    }
    while(arr[j]==1)
    {
      j--;
    }
    if(i<j)
    swap(arr[i],arr[j]);
    i++;
    j--;

  }
}
int main()
{
  int arr[8]={1,1,0,0,1,0,1,0};
  sort01(arr,8);
  print(arr,8);
}