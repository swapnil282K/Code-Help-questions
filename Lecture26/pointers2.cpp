#include<iostream>
using namespace std;
int main()
{
  int arr[10]={5,3,4};
  cout<<"Address of first block of memory: "<<arr<<endl;
  cout<<"Address of first block of memory: "<<&arr[0]<<endl;
  cout<<"*arr "<<*arr<<endl;
  cout<<"*arr+1 "<<*arr+1<<endl;
  cout<<"*(arr+1) "<<*(arr+1)<<endl;
  cout<<"*(arr)+1 "<<*(arr)+1<<endl;
  int i=2;
  cout<<i[arr]<<endl;
  //or
  cout<<*(arr+i)<<endl;

  int t[10]={2,3};
  cout<<"1: "<<sizeof(t)<<endl;
  cout<<"2: "<<sizeof(*t)<<endl;
  cout<<"3: "<<sizeof(&t)<<endl;

  int *p=&t[0];
  cout<<"4: "<<sizeof(p)<<endl;
  cout<<"5: "<<sizeof(*p)<<endl;
  cout<<"6: "<<sizeof(&p)<<endl;

  cout<<"&arr[0]: "<<&arr[0]<<endl;
  cout<<"&p: "<<&p<<endl;



}