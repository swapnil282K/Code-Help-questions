#include<iostream>
using namespace std;
void reverse(int brr[],int n)
{
  int s=0;
  int e=n-1;
  while(s<=e)
  {
    swap(brr[s],brr[e]);
    s++;
    e--;
  }
}
void print(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  int arr[6]={2,3,4,5,7,9};
  cout<<"Actual array"<<endl;
  print(arr,6);
  cout<<"After reverse"<<endl;
  reverse(arr,6);
  print(arr,6);

}