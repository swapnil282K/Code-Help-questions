#include<iostream>
//#include<map>
using namespace std;
class Node
{
  public:
  int data;
  Node* next;
  Node(int d)
  {
    this->data=d;
    this->next=NULL;
  }
  ~Node()
  {
    int val=this->data;
    if(this->next!=NULL)
    {
      delete next;
      next=NULL;
    }
    cout<<"Memory deleted "<<val<<endl;
  }
};
void insertion(Node* &tail,int ele,int d)
{
  if(tail==NULL)
  {
    Node* temp=new Node(d);
    tail=temp;
    temp->next=temp;
  }
  else{
    Node* temp=new Node(d);
    Node* curr=tail;
    while(curr->data!=ele)
    {
      curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
  }
}
void print(Node* tail)
{
  if(tail==NULL)
  {
    cout<<"List is empty"<<endl;
    return;
  }
  Node* temp=tail;
  do{
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  while(temp!=tail);
  cout<<endl;
}
void deleteNode(Node* &tail,int d)
{
  if(tail==NULL)
  {
    cout<<"List is empty"<<endl;
    return;
  }
  else{
    Node *prev=tail;
    Node* curr=prev->next;
    while(curr->data!=d)
    {
      prev=curr;
      curr=curr->next;
    }
    prev -> next = curr -> next;
    if(prev==curr)
    {
      tail=NULL;
    }
    else if(tail==curr)
    {
      tail=prev;
    }
    curr->next=NULL;
    delete curr;
  }
}
bool detectCycle(Node* head)
{
  if(head==NULL) return false;
  Node* fast=head;
  Node* slow=head;
  while(fast!=NULL && slow!=NULL)
  {
    fast=fast->next;
    if(fast!=NULL)
    {
    fast=fast->next;
    }
    slow=slow->next;
    if(slow==fast) 
    {
      cout<<"Cycle is at " <<slow->data<<endl;
      return true;
    }
  }
  return false;
}
int main()
{
Node* tail=NULL;
insertion(tail,5,6);
print(tail);
insertion(tail,6,5);
print(tail);
insertion(tail,5,4);
print(tail);
insertion(tail,4,3);
print(tail);
insertion(tail,3,2);
print(tail);
insertion(tail,2,1);
print(tail);
insertion(tail,1,0);
print(tail);
insertion(tail,5,10);
print(tail);
//deleteNode(tail,6);
//print(tail);
cout<<detectCycle(tail)<<endl;
}