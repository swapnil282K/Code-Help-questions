//1
class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    pair<int,int> diameterfast(Node* root)
    {
        if(root==NULL)
        {
            pair<int,int> p=make_pair(0,0);
            return p;
        }
        pair<int,int> left=diameterfast(root->left);
        pair<int,int> right=diameterfast(root->right);
        
        int op1=left.first;
        int op2=left.first;
        int op3=left.second+right.second+1;
        
        pair<int,int> ans;
        ans.first=max(op1,max(op2,op3));
        ans.second=max(left.second,right.second)+1;
        
        return ans;
        
    }
    int diameter(Node* root) {
        // Your code here
        return diameterfast(root).first;
    }
};


//2
class Solution
{
    public:
    //Function to return the diameter of a Binary Tree.
    int height(Node* root)
    {
        if(root==NULL)
        return 0;
    return 1+max(height(root->left),height(root->right));
    }
    int diameter(Node* root)
    {
    // Your code here
    if(root==NULL) return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    int toth=lh+rh+1;
    
    int ld=diameter(root->left);
    int rd=diameter(root->right);
    int maxd=max(ld,rd);
    
    int res=max(maxd,toth);
    
    return res;
    }

};