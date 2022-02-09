//Approach 1
Node *findMiddle(Node *head) {
    // Write your code here
    if(head==NULL ||head->next==NULL)
    {
        return head;
    }
    Node* fast=head->next;
    Node* slow=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
            fast=fast->next;
        slow=slow->next;
    }
    return slow;
}
//Approach2
int gelength(Node* head) 
{
  len=0;
  Node* temp=head;
  while(temp!=NULL)
  {
    len++;
    temp=temp->next;
  }
  return len;
}
Node *findMiddle(Node *head)
{
  int len=gelength(head)/2
  int cnt=0;
  Node* temp=head;
  while(cnt<len)
  {
    temp=temp->next;
  }
  return temp;
}