#include<iostream>
using namespace std;
class Stack
{
  int data;
  Stack *next;
  Stack* top;
  public:
  Stack(int d)
  {
    this->data=d;
    this->next=NULL;
    top=NULL;
  }
  void push(int x)
  {
    Stack* temp=new Stack(x);
    if(top==NULL)
    {
      temp->next=NULL;
    }
    else
    {
    temp->next=top;
    }
    top=temp;
  }
  void pop()
  {
    if(top==NULL)
    {
      cout<<"Stack underflow"<<endl;
    }
    else
    {
      Stack* temp=top;
      top=top->next;
      delete(temp);
    }
  }
  int peek()
  {
    return top->data;
  }
};
int main()
{
  Stack* st=new Stack(5);
  st.push(33);
  st.push(43);
  st.push(66);
  cout<<st.peek()<<endl;
  st.pop();
  cout<<st.peek()<<endl;

}