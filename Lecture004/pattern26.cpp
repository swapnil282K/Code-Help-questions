#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=1;
  while(i<=n)
  {
    int space=n-i;
    while(space)
    {
      cout<<" ";
      space--;
    }
    int j=1;
    while(j<=i)
    {
      cout<<j;
      j++;
    }
    int s=i-1;
    while(s)
    {
      cout<<s;
      s--;
    }
    i++;
    cout<<endl;
  }
}