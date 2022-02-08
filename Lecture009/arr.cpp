#include<iostream>
using namespace std;
void print(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  int arr[10];
  //accessing an array
  cout<<arr[0]<<endl;
  int s[10]={4,5,6};
  cout<<s[2]<<endl;
  for(int i=0;i<10;i++)
  {
    cout<<s[i]<<" ";
  }
  cout<<endl;
  int f[4]={0};
  for(int i=0;i<4;i++)
  {
    cout<<f[i]<<" ";
  }
  cout<<endl;
  int g[4];
  fill_n(g,4,78);
  print(g,4);

  char ch[5]={'a','b','r'};
  cout<<ch[2]<<endl;
}