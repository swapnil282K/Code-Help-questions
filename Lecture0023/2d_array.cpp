#include<iostream>
using namespace std;
int main()
{
  //create 2d array
  int arr[3][4];
  int brr[3][4];
  int crr[3][4]={1,2,3,4,5,6,7,8,9,22,44,2};
  int drr[3][4]={{1,2,3,4},{3,6,5,7},{3,6,8,5}};
  //taking input row-wise
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      cin>>arr[i][j];
    }
  }
  //output row-wise
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  // column wise
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<3;j++)
    {
      cin>>brr[j][i];
    }
  }
  //output column-wise
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      cout<<brr[i][j]<<" ";
    }
    cout<<endl;
  }

}