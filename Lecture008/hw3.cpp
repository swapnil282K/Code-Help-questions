#include<iostream>
using namespace std;
int setbits(int n)
{
  int c=0;
  while(n!=0)
  {
    if(n&1)
    {
      c++;
    }
    n=n>>1;
  }
  return c;

}
int main()
{
  int a,b;
  cin>>a>>b;
  cout<<setbits(a)+setbits(b)<<endl;
}