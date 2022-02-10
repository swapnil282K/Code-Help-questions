Node *removeLoop(Node *head)
{
   if(head == NULL) return NULL;

   Node* slow = head;
   Node* fast = head;

   while(slow != NULL && fast != NULL){

       fast = fast -> next;

       if(fast != NULL) fast = fast->next;

       slow = slow->next;

       if(slow == fast) break;

   }
   if(slow==NULL || fast==NULL) return head;
   slow = head;

   while(slow != fast){

       slow = slow->next;

       fast = fast->next;
   }
   Node* temp = slow;

   while(temp->next != slow) temp = temp->next;

   temp->next = NULL;

   return head;
}