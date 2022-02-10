//CLL
#include<iostream>
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
bool iscircular(Node* head)
{
  if(head==NULL) return true;
  Node* temp=head->next;
  while(temp!=NULL && temp!=head)
  {
    temp=temp->next;
  }
  if(temp==head) return true;
  else return false;
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
cout<<iscircular(tail)<<endl;
}


//SLL
#include<iostream>
using namespace std;
class Node
{
  public:
  int data;
  Node* next;
  Node(int val)
  {
    this->data=val;
    this->next=NULL;
  }
  ~Node()
  {
    int val=this->data;
    if(this->next!=NULL)
    {
      delete next;
      this->next=NULL;
    }
    cout<<"Memory free is: "<<val<<endl;
  }
};
void insertAtHead(Node* &head,int data)
{
  Node* temp=new Node(data);
  temp->next=head;
  head=temp;
}
void insertAtTail(Node* &tail,int data)
{
  Node* temp=new Node(data);
  tail->next=temp;
  tail=temp;
}
void insertAtpos(Node* &head,int data,int pos)
{
  if(pos==1)
  {
    insertAtHead(head,data);
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
    insertAtTail(temp,data);
    return;
  }
  Node* n1=new Node(data);
  n1->next=temp->next;
  temp->next=n1;
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
    Node* prev=NULL;
    int cnt=1;
    while(cnt<pos)
    {
      prev=curr;
      curr=curr->next;
      cnt++;
    }
    if(curr->next==NULL)
    {
      tail=prev;
    }
    prev->next=curr->next;
    curr->next=NULL;
    tail=prev;
    delete curr;
  }
}
void print(Node* &head)
{
  Node *temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  cout<<endl;
}
bool iscircular(Node* head)
{
  if(head==NULL) return true;
  Node* temp=head->next;
  while(temp!=NULL && temp!=head)
  {
    temp=temp->next;
  }
  if(temp==head) return true;
  else return false;
}
int main()
{
  Node *n1=new Node(10);
  Node* head=n1;
  Node* tail=n1;
  insertAtHead(head,6);
  insertAtHead(head,12);
  insertAtpos(head,22,3);
  print(head);
  cout<<"\nhead"<<head->data<<endl;
  cout<<"\ntail"<<tail->data<<endl;
  deleteNode(head,tail,4);
  print(head);
  cout<<"\nhead"<<head->data<<endl;
  cout<<"\ntail"<<tail->data<<endl;
  cout<<iscircular(head)<<endl;
}