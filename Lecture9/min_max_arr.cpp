#include<bits/stdc++.h>
using namespace std;
int getmax(int arr[],int n)
{
  int maxi=INT_MIN;
  for(int i=0;i<n;i++)
  {
    if(arr[i]>maxi)
    maxi=arr[i];
    //maxi=max(arr[i],maxi)
  }
  return maxi;
}
int getmin(int arr[],int n)
{
  int mini=INT_MAX;
  for(int i=0;i<n;i++)
  {
    if(arr[i]<mini)
    mini=arr[i];
    //mini=min(arr[i],mini)

  }
  return mini;
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Maximum: "<<getmax(arr,n)<<" "<< "Minimum: "
  <<getmin(arr,n);

}