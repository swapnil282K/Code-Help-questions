#include<iostream>
using namespace std;
int firstocc(int arr[], int n, int k)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+((e-s)/2);
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            ans=mid;
            e=mid-1;
        }
        else if(k>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
    
}
int lastocc(int arr[], int n, int k)
{
        int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+((e-s)/2);
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            ans=mid;
            s=mid+1;
        }
        else if(k>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}
int main()
{
  int arr[7]={1,2,3,3,3,3,6};
  cout<<"Total no of 3 in aray: "<<
  lastocc(arr,7,3)-firstocc(arr,7,3)+1<<endl;
}