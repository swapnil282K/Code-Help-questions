#include<iostream>
using namespace std;
int main()
{
  int amt;
  cout<<"Enter amount"<<endl;
  cin>>amt;
  switch(1)
  {
    case 1: 
    {int rs100=amt/100;
    amt=amt%100;
    cout<<"100 notes: "<< rs100<<endl;
    }

    case 2: 
    {
      int rs50=amt/50;
    amt=amt%50;
    cout<<"50 notes: "<< rs50<<endl;
    }
    case 3: 
    {
    int rs20=amt/20;
    amt=amt%20;
    cout<<"20 notes: "<< rs20<<endl;
    }
    case 4:
    {
     int rs1=amt/1;
    amt=amt%1;
    cout<<"1 notes: "<< rs1<<endl;
    }
  }

}