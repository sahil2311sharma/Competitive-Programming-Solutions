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
void print(Node*root)
{
    if(root!=NULL)
    {
        print(root->left);
        print(root->right);
        cout<<root->data<<" ";
    }
}
int main()
{
    Node*root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    print(root);
    return 0;
}