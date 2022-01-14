#include<iostream>
using namespace std;
void swapalternate(int arr[],int n)
{
  for(int i=0;i<n;i=i+2)
  {
    if(i+1<n)
    swap(arr[i],arr[i+1]);
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
  int even[8]={5,2,9,4,7,6,1,0};
  int odd[5]={11,33,9,76,43};
  swapalternate(even,8);
  print(even,8);
  swapalternate(odd,5);
  print(odd,5);
}