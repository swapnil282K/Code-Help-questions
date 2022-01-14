#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
  int s=0,e=n-1;
  int mid=s+((e-s)/2);
  while(s<=e)
  {
    if(arr[mid]==key)
    {
      return mid;
    }
    else if(arr[mid]<key)
    {
      s=mid+1;
    }
    else {
      e=mid-1;
  }
  mid=s+((e-s)/2);
}
return -1;
}
int main()
{
  int even[6]={2,4,6,8,12,18};
  int odd[5]={3,8,11,14,16};
  int index=binarysearch(even,6,12);
  cout<<"Index of 12 in even array: "<<index<<endl;
  int index2=binarysearch(odd,5,11);
  cout<<"Index of 11 in odd array: "<<index2<<endl;
}