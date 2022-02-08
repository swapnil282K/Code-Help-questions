#include<iostream>
using namespace std;
class Node
{
  public:
  int data;
  Node* next;
  Node* prev;
  Node(int val)
  {
    this->data=val;
    this->next=NULL;
    this->prev=NULL;
  }
};
void print(Node* head)
{
  Node* temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
int getlength(Node* head)
{
  Node* temp=head;
  int cnt=0;
  while(temp!=NULL)
  {
    //cout<<temp->data<<" ";
    temp=temp->next;
    cnt++;
  }
  return cnt;
}
void insertAtHead(Node* &head,int d)
{
  Node* temp=new Node(d);
  temp->next=head;
  head->prev=temp;
  head=temp;
}
void insertAtTail(Node* &tail,int d)
{
  Node* temp=new Node(d);
  tail->next=temp;
  temp->prev=tail;
  tail=temp;
}
void insertAtPos(Node* &head,Node* &tail,int d,int pos)
{
  if(pos==1)
  {
    insertAtHead(head,d);
    return;
  }
  Node* temp=head;
  int cnt=1;
  while(cnt<pos-1)
  {
    temp=temp->next;
    cnt++;
  }
  if(temp->next==NULL)
  {
    insertAtTail(tail,d);
    return;
  }
  Node* n1=new Node(d);
  n1->next=temp->next;
  temp->next->prev=n1;
  temp->next=n1;
  n1->prev=temp;
}
void deleteNode(Node* &head,Node* &tail,int pos)
{
  if(pos==1)
  {
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
  }
  else
  {
    Node* curr=head;
    Node* back=NULL;
    int cnt=1;
    while(cnt<pos)
    {
      back=curr;
      curr=curr->next;
      cnt++;
    }
    if(curr->next==NULL)
    {
      tail=back;
    }
    back->next=curr->next;
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;
  }
}
int main()
{
  Node* n1=new Node(10);
  Node* tail=n1;
  Node* head=n1;
  print(head);
  //cout<<getlength(head)<<endl;
  insertAtTail(tail,11);
  print(head);
  //cout<<getlength(head)<<endl;
  insertAtTail(tail,12);
  print(head);
  //cout<<getlength(head)<<endl;
  insertAtTail(tail,13);
  print(head);
  //cout<<getlength(head)<<endl;
  insertAtPos(head,tail,100,5);
  print(head);
  deleteNode(head,tail,3);
  print(head);
}