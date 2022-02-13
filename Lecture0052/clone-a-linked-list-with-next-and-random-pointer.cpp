// Approach 1
class Solution
{
    private: 
    void insertattail(Node* &head,Node* &tail,int d)
    {
        Node* temp=new Node(d);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    public:
    Node *copyList(Node *head)
    {
        //Write your code here
        Node* cloneHead=NULL;
        Node* cloneTail=NULL;
        Node* curr=head;
        while(curr!=NULL)
        {
            insertattail(cloneHead,cloneTail,curr->data);
            curr=curr->next;
        }
        unordered_map<Node*,Node*> mp;
        Node* temp=head;
        Node* temp2=cloneHead;
        while(temp!=NULL)
        {
            mp[temp]=temp2;
            temp=temp->next;
            temp2=temp2->next;
        }
        
        temp=head;
        temp2=cloneHead;
        
        while(temp!=NULL)
        {
            temp2->arb=mp[temp->arb];
            temp=temp->next;
            temp2=temp2->next;
        }
        return cloneHead;
        
    }

};

// Approach 2

class Solution
{
    private: 
    void insertattail(Node* &head,Node* &tail,int d)
    {
        Node* temp=new Node(d);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    public:
    Node *copyList(Node *head)
    {
        //Write your code here
        Node* cloneHead=NULL;
        Node* cloneTail=NULL;
        Node* curr=head;
        while(curr!=NULL)
        {
            insertattail(cloneHead,cloneTail,curr->data);
            curr=curr->next;
        }
        Node* original=head;
        Node* clone=cloneHead;
        while(original!=NULL && clone!=NULL)
        {
            Node* next1=original->next;
            original->next=clone;
            original=next1;
            Node* next2=clone->next;
            clone->next=original;
            clone=next2;
        }
        Node* temp=head;
        while(temp!=NULL)
        {
            if(temp->next!=NULL)
            {
                temp->next->arb=temp->arb ? 
                temp->arb->next : temp->arb;
            }
            temp=temp->next->next;
        }
        original=head;
        clone=cloneHead;
        while(original!=NULL && clone!=NULL)
        {
            original->next=clone->next;
            original=original->next;
            if(original!=NULL)
            {
            clone->next=original->next;
            }
            clone=clone->next;
        }
        return cloneHead;
        
    }

};