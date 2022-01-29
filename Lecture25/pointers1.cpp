#include<iostream> 
using namespace std;
int main()
{
  int num=5;
  cout<<num<<endl;
  cout<<"Address of num: "<<&num<<endl;

  int *ptr=&num;
  cout<<"Value of *ptr: "<<*ptr<<endl;
  cout<<"Value of ptr : "<<ptr<<endl;
  cout<<"Size of ptr: "<<sizeof(ptr)<<endl;

  //Bad practice
  int *p;
  cout<<*p<<endl;

  //Good practice
  int *p2=0;
  // cout<<*p2<<endl;
  // Here output is Segmentation fault as p2 is pointing to null

  int i=6;
  p2=&i;
  cout<<p2<<endl;
  cout<<*p2<<endl;

  int j=5;
  int *q=&j;
  *q*=2;
  cout<<j<<endl;

  // Copying a pointer
  int t=8;
  int *ptr1=&t;
  int *ptr2=ptr1;
  cout<<ptr1<<" - "<<ptr2<<endl;
  cout<<*ptr1<<" - "<<*ptr2<<endl;

  //Pointer Arithmetic
  int n=7;
  int *a=&n;
  cout<<"Before increment"<<endl;
  cout<<"*a: "<<*a<<endl;
  cout<<"a: "<<a<<endl;

  cout<<"After increment"<<endl;
  *a=*a+1;
  cout<<"*a: "<<*a<<endl;
  a=a+1;
  cout<<"a: "<<a<<endl;
}