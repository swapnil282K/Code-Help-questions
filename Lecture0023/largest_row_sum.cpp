#include<bits/stdc++.h>
using namespace std;
void largest_row_sum(int arr[][4],int row,int col)
{
  int maxi=INT_MIN;
  int num=-1;
  for(int i=0;i<row;i++)
  {
    int sum=0;
    for(int j=0;j<col;j++)
    {
      sum+=arr[i][j];

    }
    if(sum>maxi)
    {
    maxi=sum;
    num=i;
    }
  }
  cout<<"Max row is at index: "<<num<<endl;
  cout<<"Max row sum is : "<<maxi<<endl;
}
int main()
{
  int crr[3][4]={1,2,3,4,5,6,7,8,9,22,44,2};
  largest_row_sum(crr,3,4);
}