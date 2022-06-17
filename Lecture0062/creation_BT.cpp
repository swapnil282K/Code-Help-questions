#include <bits/stdc++.h>
using namespace std;

class node
{
public:
int data;
node* left;
node* right;
node(int d)
{
  this->data=d;
  this->left=NULL;
  this->right=NULL;
}
};
node* buildtree(node* root)
{
  cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildtree(root->right);
    return root;
}
void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}
void preorder(node* root)
{
  if(root==NULL)
  {
    return;
  }
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}
void inorder(node* root)
{
  if(root==NULL)
  {
    return;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}
void postorder(node* root)
{
  if(root==NULL)
  {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}
void buildtree_LOT(node* &root)
{
  queue<node*> q;
  int d;
  cout<<"Enter data"<<" ";
  cin>>d;
  root=new node(d);

  q.push(root);
  while(!q.empty())
  {
    node* temp=q.front();
    q.pop();
    cout<<"Enter left data for "<<temp->data<<endl;
    int ldata;
    cin>>ldata;
    if(ldata!=-1)
    {
      temp->left=new node(ldata);
      q.push(temp->left);
    }
    cout<<"Enter right data for "<<temp->data<<endl;
    int rdata;
    cin>>rdata;
    if(rdata!=-1)
    {
      temp->right=new node(rdata);
      q.push(temp->right);
    }
    
  }
}
int main()
{
  node* root=NULL;
  buildtree_LOT(root);
  levelOrderTraversal(root);
  // root=buildtree(root);
  // //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
  // //1
  // //3 5
  // //7 11 17
  // cout<<"Level order Traversal"<<endl;
  // levelOrderTraversal(root);
  // cout<<"Preorder Traversal"<<endl;
  // preorder(root);
  // cout<<"\nInorder Traversal"<<endl;
  // inorder(root);
  // cout<<"\nPostorder Traversal"<<endl;
  // postorder(root);
}