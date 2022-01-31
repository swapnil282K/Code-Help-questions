#include<iostream>
using namespace std;
void merge(int *arr,int s,int e)
{
  int mid=(s+e)/2;
  int l1=mid-s+1;
  int l2=e-mid;
  int *farr=new int[l1];
  int *sarr=new int[l2];
  int k=s;
  for(int i=0;i<l1;i++)
  {
    farr[i]=arr[k++];
  }
  k=mid+1;
  for(int i=0;i<l2;i++)
  {
    sarr[i]=arr[k++];
  }
  int i1=0;
  int i2=0;
  k=s;
  while(i1<l1 && i2<l2)
  {
    if(farr[i1]<sarr[i2])
    {
      arr[k++]=farr[i1++];
    }
    else {
      arr[k++]=sarr[i2++];
    }
  }
  while(i1<l1)
  {
    arr[k++]=farr[i1++];
  }
  while(i2<l2)
  {
    arr[k++]=sarr[i2++];
  }
  delete []farr;
  delete []sarr;

}
void mergesort(int*arr,int s,int e)
{
  if(s>=e) return;
  int mid=(s+e)/2;
  mergesort(arr,s,mid);
  mergesort(arr,mid+1,e);
  merge(arr,s,e);
  
}
int main()
{
  int arr[5]={7,5,4,3,2};
  int n=5;
  for(int i=0;i<5;i++)
 {
   cout<<arr[i]<<" ";
 }cout<<endl;
  mergesort(arr,0,n-1);
 for(int i=0;i<5;i++)
 {
   cout<<arr[i]<<" ";
 }
 cout<<endl;
}
