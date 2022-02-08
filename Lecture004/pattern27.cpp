#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=1;
  while(i<=n)
  {
    int j1=1;
    int k1=1;
    while(j1<=n-i+1)
    {
      cout<<k1;
      k1++;
      j1++;
    }
    int s=i-1;
    while(s)
    {
      cout<<"**";
      s--;
    }
    int j2=1;
    int k2=n-i+1;
    while(j2<=n-i+1)
    {
      cout<<k2;
      k2--;
      j2++;

    }

    cout<<endl;
    i++;
  }
}