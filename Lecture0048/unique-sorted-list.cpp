/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

Node * uniqueSortedList(Node * head) {
    // Write your code here.
    if(head==NULL) return NULL;
    Node* curr=head;
    while(curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
         Node* tmp=curr->next->next;
            Node* todelete=curr->next;
            delete(todelete);
            curr->next=tmp;
        }
        else
        {
            curr=curr->next;
        }
    }
    return head;
}