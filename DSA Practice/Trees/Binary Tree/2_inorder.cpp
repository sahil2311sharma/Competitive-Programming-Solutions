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
void print(Node*root)
{
    if(root!=NULL)
    {
        print(root->left);
        cout<<root->key<<" ";
        print(root->right);
    }
}
int main()
{
    Node*root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left= new Node(40);
    root->right->right= new Node(50);
    print(root);
    cout<<endl;
    //cout<<getsize(root);
    return 0;
}