#include<iostream>
using namespace std;
void printsum(int arr[][4],int row,int col)
{
  for(int i=0;i<row;i++)
  {
    int sum=0;
    for(int j=0;j<col;j++)
    {
      sum+=arr[i][j];

    }
    cout<<sum<<" ";
  }
  cout<<endl;
}
int main()
{
  int crr[3][4]={1,2,3,4,5,6,7,8,9,22,44,2};
  printsum(crr,3,4);
}