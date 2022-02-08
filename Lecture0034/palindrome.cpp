#include<iostream>
using namespace std;
bool solve(string n,int s,int e)
{
    if(s>e) return true;
    if(n[s]!=n[e])
        return false;
   else
   {
    return solve(n,s+1,e-1);
   }
}
int main()
{
  string s;
  cin>>s;
  bool ans=solve(s,0,s.length()-1);
  cout<<ans<<endl;
}