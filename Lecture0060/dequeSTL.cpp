#include <iostream>
#include<queue>
using namespace std;
int main()
{
  deque<int> d;
  d.push_front(11);
  d.push_back(14);
  cout<<d.front()<<endl;
  cout<<d.back()<<endl;
  d.pop_front();
  cout<<d.front()<<endl;
  cout<<d.back()<<endl;
  d.pop_back();

  if(d.empty())
  {
    cout<<"Empty"<<endl;
  }
  else
    {
      cout<<"Not Empty"<<endl;
    
    }
  
}