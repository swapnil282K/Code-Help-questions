#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  bool f=1;
  for(int i=2;i<n;i++)
  {
    if(n%i==0)
    {
    f=0;
    break;
    }
  }
  if(f==0)
  {
    cout<<"Not prime"<<endl;
  }
  else {
    cout<<"Prime"<<endl;
  }
} 