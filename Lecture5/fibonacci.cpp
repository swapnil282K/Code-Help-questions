#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a=0,b=1;
  cout<<a<<" "<<b<<" ";
  for(int i=1;i<=n-2;i++)
  {
    int fib=a+b;
    cout<<fib<<" ";
    a=b;
    b=fib;
  }
}