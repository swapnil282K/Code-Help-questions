#include<iostream>
using namespace std;
bool issorted(int arr[],int n)
{
  if(n==0 || n==1)
  return true;
  if(arr[0]>arr[1])
  return false;
  else
  return issorted(arr+1,n-1);
}
int main()
{
  int arr[5]={2,4,6,8,9};
  int size=5;
  cout<<issorted(arr,size)<<endl;
}