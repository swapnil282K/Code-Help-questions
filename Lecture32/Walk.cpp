#include<iostream>
using namespace std;
void walk(int src,int dest)
{
  cout<<"Source "<<src<<" destination "<<dest<<endl;
  //base case
  if(src==dest)
  {
  cout<<"Pahuch gye"<<endl;
  return;
  }
  //processing
  src++;
  //RR
  walk(src,dest);
}
int main()
{
  int src=1,dest=10;
  walk(src,dest);
}