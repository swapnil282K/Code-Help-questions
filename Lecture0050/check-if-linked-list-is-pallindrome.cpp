// Approach 1

#include<vector>
class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        vector<int> v;
        Node* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->data);
            temp=temp->next;
        }
        int n=v.size();
        int s=0,e=n-1;
        while(s<=e)
        {
            if(v[s]!=v[e])
            return false;
            s++;
            e--;
        }
        return true;
    }
};

// Approach 2
#include<vector>
class Solution{
    private:
    Node* getmid(Node* head)
    {
        Node*slow=head;
        Node* fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    Node* reverse(Node* head)
    {
        Node* curr=head;
        Node* prev=NULL;
        Node* next1=NULL;
        while(curr!=NULL)
        {
            next1=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next1;
        }
        return prev;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head==NULL || head->next==NULL) return true;
        Node* mid=getmid(head);
        Node* temp=mid->next;
        mid->next=reverse(temp);
        
        Node* head1=head;
        Node* head2=mid->next;
        while(head2 != NULL)
        {
            if((head1->data) != (head2->data)) return false;
            head1=head1->next;
            head2=head2->next;
        }
        temp=mid->next;
        mid->next=reverse(temp);
        return true;
    }
};
