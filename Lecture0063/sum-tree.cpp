class Solution
{
    public:
    pair<bool,int> isSum(Node* root)
    {
        if(root==NULL)
        {
            pair<bool,int> p=make_pair(true,0);
            return p;
        }
        if(root->left==NULL && root->right==NULL)
        {
            pair<bool,int> p=make_pair(true,root->data);
            return p;
        }
        
        pair<bool,int> leftsum=isSum(root->left);
        pair<bool,int> rightsum=isSum(root->right);
        
        bool left=leftsum.first;
        bool second=rightsum.first;
        
        bool cond= root->data==leftsum.second+rightsum.second;
        
        pair<bool,int> ans;
        
        if(left && right && cond)
        {
            ans.first=true;
            ans.second=2*root->data;
        }
        else
        {
            ans.first=false;
        }
        return ans;
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         return isSum(root).first;
         
    }
};