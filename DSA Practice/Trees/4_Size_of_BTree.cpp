#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*left,*right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};
int size(Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        return (1+size(root->left)+size(root->right));                            // size of BST             =   6
    //  return max(root->data,max(size(root->left),size(root->right)));           // maximum element in BST  =   60
    //  return max(size(root->left),size(root->right))+1;                         // maximum height of BST   =   3
    }
}
int main()
{
    Node*root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    root->left->left=new Node(60);
    cout<<size(root);
}