#include<iostream>
using namespace std;
void update(int **p2)
{
  //p2=p2+1;
  //Chage?--No
  //*p2=*p2+1;
  //Chage?--Yes
  **p2=**p2+1;
  //Chage?--yes
}
int main()
{
  int i=5;
  int *p=&i;
  int **p2=&p;

  cout<<i<<endl;
  cout<<*p<<endl;
  cout<<**p2<<endl<<endl;

  cout<<&i<<endl;
  cout<<p<<endl;
  cout<<*p2<<endl<<endl;

  cout<<&p<<endl;
  cout<<p2<<endl;

  cout<<"Before"<<endl;
   cout<<i<<endl;
  cout<<p<<endl;
  cout<<p2<<endl<<endl;
  update(p2);
  cout<<"After"<<endl;
   cout<<i<<endl;
  cout<<p<<endl;
  cout<<p2<<endl<<endl;
}