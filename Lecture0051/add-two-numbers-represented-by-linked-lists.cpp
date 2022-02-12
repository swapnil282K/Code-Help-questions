class Solution
{
    private:
    struct Node* reverse(struct Node* head)
    {
    struct Node* curr=head;
    struct Node* prev=NULL;
    struct Node* next1=NULL;
    while(curr!=NULL)
    {
        next1=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next1;
    }
    return prev;
    }
    void insertAtTail(struct Node* &anshead,
    struct Node* &anstail,int val)
    {
        struct Node* temp=new Node(val);
        if(anshead==NULL)
        {
            anshead=temp;
            anstail=temp;
        }
        else
        {
            anstail->next=temp;
            anstail=temp;
        }
        
    }
    struct Node* add(struct Node* first, struct Node* second)
    {
        int carry=0;
        struct Node* anshead=NULL;
        struct Node* anstail=NULL;
        while(first!=NULL && second!=NULL)
        {
            int sum=carry+first->data+second->data;
            int digit=sum%10;
            insertAtTail(anshead,anstail,digit);
            carry=sum/10;
            first=first->next;
            second=second->next;
        }
        while(first!=NULL)
        {
            int sum=carry+first->data;
            int digit=sum%10;
            insertAtTail(anshead,anstail,digit);
            carry=sum/10;
            first=first->next;
        }
        while(second!=NULL)
        {
            int sum=carry+second->data;
            int digit=sum%10;
            insertAtTail(anshead,anstail,digit);
            carry=sum/10;
            second=second->next;
        }
        while(carry!=0)
        {
            int sum=carry;
            int digit=sum%10;
            insertAtTail(anshead,anstail,digit);
            carry=sum/10;
        }
        return anshead;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first=reverse(first);
        second=reverse(second);
        struct Node* ans=add(first,second);
        
        ans=reverse(ans);
        return ans;
    }
};

// Optimised code

// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    private:
    struct Node* reverse(struct Node* head)
    {
    struct Node* curr=head;
    struct Node* prev=NULL;
    struct Node* next1=NULL;
    while(curr!=NULL)
    {
        next1=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next1;
    }
    return prev;
    }
    void insertAtTail(struct Node* &anshead,
    struct Node* &anstail,int val)
    {
        struct Node* temp=new Node(val);
        if(anshead==NULL)
        {
            anshead=temp;
            anstail=temp;
        }
        else
        {
            anstail->next=temp;
            anstail=temp;
        }
        
    }
    struct Node* add(struct Node* first, struct Node* second)
    {
        struct Node* anshead=NULL;
        struct Node* anstail=NULL;
        
        
        int carry=0;
       
        while(first!=NULL || second!=NULL || carry!=0)
        {
             int val1=0;
             if(first!=NULL)
             {
                val1=first->data;
             }
            int val2=0;
            if(second!=NULL)
            {
                val2=second->data;
            }
            int sum=carry+val1+val2;
            int digit=sum%10;
            insertAtTail(anshead,anstail,digit);
            carry=sum/10;
            if(first!=NULL)
            {
            first=first->next;
            }
            if(second!=NULL)
            {
            second=second->next;
            }
        }
        
        return anshead;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first=reverse(first);
        second=reverse(second);
        struct Node* ans=add(first,second);
        
        ans=reverse(ans);
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends