#include<iostream>
using namespace std;
#define INT_MAX 32
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
int m(Node*root)
{
    if(root==NULL)
    {
        return INT_MAX;
    }
    else
    {
        return max(root->data,max(m(root->left),m(root->right)));
    }
}
int main()
{
    Node*root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(60);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    cout<<m(root);
}