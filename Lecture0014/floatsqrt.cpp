#include<iostream>
using namespace std;
int squareint(int n)
{
  int s=0;
  int e=n;
  int mid=s+(e-s)/2;
  int ans=-1;
  while(s<=e)
  {
    if((mid*mid)==n)
    {
      ans=mid;
    }
    else if((mid*mid)<n)
    {
      ans=mid;
      s=mid+1;
    }
    else 
    {
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}
double squarefloat(int n,int tempsol,int precision)
{
  double factor=1;
  double ans=tempsol;
  for(int i=0;i<precision;i++)
  {
    factor=factor/10;
    for(double j=ans;j*j<n;j=j+factor)
    {
      ans=j;
    }
  }
  return ans;
}
int main()
{
  int n;
  cout<<"Enter the no whose sqrt is to be found: "<<endl;
  cin>>n;
  int tempsol=squareint(n);
  cout<<"Answer: "<<squarefloat(n,tempsol,3);

}