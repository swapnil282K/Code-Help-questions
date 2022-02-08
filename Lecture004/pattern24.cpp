#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=1;
  while(i<=n)
  {
    int space=i-1;
    while(space)
    {
      cout<<" ";
      space--;

    }
    int k=i;
    int j=n-i+1;
    while(j>0)
    {
      cout<<k;
      k++;
      j--;
    }
    cout<<endl;
    i++;
  }
}