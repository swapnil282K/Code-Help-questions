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
Node* getStarting(Node* head)
{
  Node* intersection=detectCycle(head);
  Node* slow=head;
  hile(slow!=intersection)
  {
    slow=slow->next;
    intersection=intersection->next;
  }
  return slow;
}