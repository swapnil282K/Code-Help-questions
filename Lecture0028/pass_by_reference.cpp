#include<iostream>
using namespace std;
void update(int& n)
{
  n++;
}
int main()
{
  int n=5;
  cout<<"Before\n";
  cout<<n<<endl;
  update(n);
  cout<<"After\n";
  cout<<n<<endl;
}