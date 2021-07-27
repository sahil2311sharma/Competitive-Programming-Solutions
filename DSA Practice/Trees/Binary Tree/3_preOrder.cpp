#include<iostream>
#include<algorithm>
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
void preOrder(Node*root)
{
    if(!root)
    {
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main()
{
    Node*root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left= new Node(40);
    root->left->right= new Node(50);
    /*
                          10
                       /      \
                     20         30
                   /    \
                40        50
    
    
    */
    print(root);
}