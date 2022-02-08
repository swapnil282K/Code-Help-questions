#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
  if(n==0 || n==1) return;
  for(int i=0;i<n-1;i++)
  {
    if(arr[i]>arr[i+1])
    swap(arr[i],arr[i+1]);
  }
  bubblesort(arr,n-1);
}
int main()
{
  int arr[6]={8,7,6,5,4,3};
  bubblesort(arr,6);
  for(int i=0;i<6;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}