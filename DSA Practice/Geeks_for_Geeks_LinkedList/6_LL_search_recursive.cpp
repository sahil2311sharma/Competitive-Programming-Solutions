#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
int searchll(Node *head,int x)
{
    if(head==NULL)
    {
        return -1;
    }
    if((head->data)==x)
    {
        return 1;
    }
    else
    {
        int res=searchll(head->next,x);
        if(res==-1)
        {
            return -1;
        }
        else
        {
            return res+1;
        }
    }
    return -1;
}
int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    int d;
    cin>>d;
    cout<<searchll(head,d);
    return 0;
}