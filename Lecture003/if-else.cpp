#include<iostream>
using namespace std;
int main()
{
  char ch;
  cin>>ch;
  if(ch>='a' && ch<='z')
  {
    cout<<ch<<" is in lowercase\n";
  }
  else if(ch>='A' && ch<='Z')
  {
    cout<<ch<<" is in uppercase\n";
  }
  else if(ch>='0' && ch<='9')
  {
    cout<<ch<<" is numeric\n";
  }
}
