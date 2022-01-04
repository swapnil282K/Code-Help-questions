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
    int k=i;
    int j=1;
    while(j<=i)
    {
      cout<<k;
      j++;
    }
    cout<<endl;
    i++;
  }
}