//iteratve method
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head==NULL || head->next==NULL){
        return head;
    }
    LinkedListNode<int>* prev=NULL;
    LinkedListNode<int>* curr=head;
    LinkedListNode<int>* forward=NULL;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

//Recursive1
void reverse(Node* &head,Node* curr,Node* prev)
{
if(curr=NULL)
{
  head=prev;
  return;
}
Node* forward=curr->next;
reverse(head,forward,curr);
curr->next=prev;
}

//Recursive2
Node* reverse(Node* &head)
{
  if(head==NULL || head->next==NULL)
  {
    return head;
  }
  Node* chotahead=reverse(head->next);

  head->next->next=head;
  head->next=NULL;
  return chotahead;
}