//Approach1

/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/

Node* sortList(Node *head)
{
    // Write your code here.
    int zero=0,one=0,two=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==0)
            zero++;
        else if(temp->data==1)
            one++;
        else if(temp->data==2)
            two++;
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        if(zero!=0)
        {
            temp->data=0;
            zero--;
        }
        else if(one!=0)
        {
            temp->data=1;
            one--;
        }
        else if(two!=0)
        {
            temp->data=2;
            two--;
        }
        temp=temp->next;
    }
return head;
}

//Approach2
/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/
void insertAtTail(Node* &tail,Node* curr)
{
    tail->next=curr;
    tail=curr;
}
Node* sortList(Node *head)
{
    // Write your code here.
    Node* zerohead=new Node(-1);
    Node* zerotail=zerohead;
    Node* onehead=new Node(-1);
    Node* onetail=onehead;
    Node* twohead=new Node(-1);
    Node* twotail=twohead;
    
    Node* curr=head;
    while(curr!=NULL)
    {
        int val=curr->data;
        if(val==0)
        {
            insertAtTail(zerotail,curr);
        }
        else if(val==1)
        {
            insertAtTail(onetail,curr);
        }
        else if(val==2)
        {
            insertAtTail(twotail,curr);
        } 
        curr=curr->next;
    }
    if(onehead->next!=NULL)
    {
        zerotail->next=onehead->next;
    }
    else
    {
        zerotail->next=twohead->next;
    }
    onetail->next=twohead->next;
    twotail->next=NULL;
    
    head=zerohead->next;
    
    delete zerohead;
    delete onehead;
    delete twohead;
return head;
}
