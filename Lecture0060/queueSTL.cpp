#include <iostream>
#include <queue>
using namespace std;
int main()
{
  queue<int> q;
  q.push(11);
  q.push(12);
  q.push(13);
  cout<<q.size()<<endl;
  cout<<q.front()<<endl;
  q.pop();
  cout<<q.size()<<endl;
  q.pop();
  cout<<q.size()<<endl;
  q.pop();
  cout<<q.size()<<endl;
  if(q.empty())
  {
  cout<<"q is empty"<<endl;
  }
}