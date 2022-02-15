node* getmid(node* head)
{
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
node* merge(node* l1,node* l2)
{
    if(l1==NULL)
    {
        return l2;
    }
    if(l2==NULL)
    {
        return l1;
    }
    node* ans=new node(-1);
    node* temp=ans;
    while(l1!=NULL && l2!=NULL)
    {
        if(l1->data < l2->data)
        {
            temp->next=l1;
            temp=l1;
            l1=l1->next;
        }
        else
        {
            temp->next=l2;
            temp=l2;
            l2=l2->next;
        }
    }
    while(l1!=NULL)
    {
        temp->next=l1;
        temp=l1;
        l1=l1->next;
    }
    while(l2!=NULL)
    {
        temp->next=l2;
        temp=l2;
        l2=l2->next;       
    }
    ans=ans->next;
    return ans;
}
node* mergeSort(node *head) {
    // Write your code here.
    if(head==NULL || head->next==NULL) return head;
    node* mid=getmid(head);
    node* first=head;
    node* second=mid->next;
    mid->next=NULL;
    first=mergeSort(first);
    second=mergeSort(second);
    
    node* ans= merge(first,second);
    
    return ans;
}
