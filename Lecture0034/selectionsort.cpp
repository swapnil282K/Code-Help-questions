#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
  if(n==0 || n==1) return;
  int i=0;
  int temp=arr[i];
  int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
  arr[j+1]=temp;
  insertionsort(arr+1,n-1);
}
int main()
{
  int arr[6]={8,7,6,5,4,3};
  insertionsort(arr,6);
  for(int i=0;i<6;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}