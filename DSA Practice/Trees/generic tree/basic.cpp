#include<bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

void printTree(TreeNode<int>*root)
{
    if(!root){return;}
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        printTree(root->children[i]);
    }
}

int main()
{
    TreeNode<int>* root   = new TreeNode <int> (1);
    
    TreeNode<int>* child1 = new TreeNode <int> (2);
    TreeNode<int>* child2 = new TreeNode <int> (3);
    
    TreeNode<int>* child11 = new TreeNode <int> (4);
    TreeNode<int>* child12 = new TreeNode <int> (5);
    TreeNode<int>* child13 = new TreeNode <int> (6);
    
    root->children.push_back(child1);
    root->children.push_back(child2);
    
    child1->children.push_back(child11);
    child1->children.push_back(child12);
    child1->children.push_back(child13);
    printTree(root);
}