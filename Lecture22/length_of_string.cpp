#include <iostream>
using namespace std;
int getlength(char name[])
{
  int c=0;
  for(int i=0;name[i]!='\0';i++)
  {
    c++;
  }
  return c;
}
int main()
{
  char name[20];
  cin>>name;
  cout<<"Your name is "<<name<<endl;
  cout<<"Length of name: "<<getlength(name)<<endl;
}