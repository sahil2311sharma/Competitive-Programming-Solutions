#include<iostream>
using namespace std;
class Node
{
    public:
    int key;
    Node*left,*right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};
int main()
{
    Node*root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left= new Node(40);
}