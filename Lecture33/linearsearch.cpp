#include<iostream>
using namespace std;
bool find(int arr[],int n,int key)
{
  if(n==0)
  return false;
  if(arr[0]==key)
  return true;
  else{
  return find(arr+1,n-1,key);}
}
int main()
{
  int arr[5]={2,4,6,8,9};
  int size=5;
  int key=4;
  cout<<find(arr,size,key)<<endl;
}