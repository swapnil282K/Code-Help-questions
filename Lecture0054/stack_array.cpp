#include<bits/stdc++.h>
using namespace std;
class Stack
{
public:
int top;
int* arr;
int size;
Stack(int size)
{
  this->size=size;
  arr=new int[size];
  top=-1;
}
void push(int x)
{
  if(size-top>1){
    top++;
    arr[top]=x;
  }
  else
  {
    cout<<"stack overflow"<<endl;
  }

}
void pop()
{
  if(top>=0)
  {
    top--;
  }
  else
  {
    cout<<"Stack underflow"<<endl;
  }
}
int peek()
{
  if(top>=0 )
  {
    return arr[top];
  }
  else
  {
    cout<<"stack is empty"<<endl;
    return -1;
  }
}
bool isEmpty()
{
  if(top==-1)
   return true;
  else
   return false; 

}
};
int main()
{
  Stack st(5);
  st.push(22);
  st.push(35);
  st.push(93);
  st.push(83);
  st.push(38);
  cout<<st.peek()<<endl;
  st.pop();
  cout<<st.peek()<<endl;
  st.pop();
  cout<<st.peek()<<endl;
  st.pop();
  cout<<st.peek()<<endl;
  st.pop();
  cout<<st.isEmpty()<<endl;
}