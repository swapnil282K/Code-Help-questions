/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
Node<int>* solve(Node<int>* h1, Node<int>* h2)
{
    if(h1->next==NULL)
    {
        h1->next=h2;
        return h1;
    }
    Node<int>* curr1=h1;
    Node<int>* curr2=h2;
    Node<int>* next1=curr1->next;
    Node<int>* next2=curr2->next;
    while(next1!=NULL && curr2!=NULL)
    {
        if((curr2->data>=curr1->data) 
           && (curr2->data<=next1->data))
        {
            curr1->next=curr2;
            next2=curr2->next;
            curr2->next=next1;
            
            curr1=curr2;
            curr2=next2;
            
        }
        else
        {
            curr1=next1;
            next1=next1->next;
            if(next1==NULL)
            {
                curr1->next=curr2;
                return h1;
            }
        }
    }
    return h1;
}
Node<int>* sortTwoLists(Node<int>* h1, Node<int>* h2)
{
    // Write your code here.
    if(h1==NULL) return h2;
    if(h2==NULL) return h1;
    if(h1->data<h2->data)
        return solve(h1,h2);
    else
        return solve(h2,h1);
}
