#include<iostream>
using namespace std;
void print(int *p)
{
  cout<<*p<<endl;
}
void update(int *p)
{
  //p=p+1;
  //cout<<p<<endl;
  *p=*p+1;
}
int getsum(int *arr,int n)
{
  cout<<sizeof(arr)<<endl;
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];

  }
  return sum;
}
int main()
{
  // int v=5;
  // int *p=&v;
  // //print(p);
  // cout<<p<<endl;
  // cout<<*p<<endl;
  // update(p);
  // //cout<<p<<endl;
  // cout<<*p<<endl;
  int arr[5]={1,2,3,4,5};
  cout<<getsum(arr,5)<<endl;
  cout<<getsum(arr+2,3)<<endl;
}