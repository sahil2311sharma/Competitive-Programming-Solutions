#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
Node* takeInput()
{
    int data;
    cin>>data;
    Node*head=NULL;
    Node*tail=NULL;
    while(data!=-1)
    {
        Node*newNode=new Node(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
        cin>>data;
    }
    return head;
}
void findNode(Node*head,int k)
{
    /*int len=0;
    Node*temp=head;
    /////////while(temp!=NULL)
    ////////{
    ////////    temp=temp->next;
    ////////    len++;
    ////////}
    for(Node*temp=head;temp!=NULL;temp=temp->next)
    {
        len++;
    }
    if((len-i)<0)
    {
        return ;
    }
    Node*temp=head;
    for(int j=0;j<len-i;j++)
    {
        temp=temp->next;
    }
    cout<<temp->data;*/
    if(head==NULL)
    {
        return;
    }
    Node*first=head;
    for(int i=0;i<k;i++)
    {
        if(first==NULL)
        {
            return;
        }
        first=first->next;
    }
    Node*sec=head;
    while(first!=NULL)
    {
        sec=sec->next;
        first=first->next;
    }
    cout<<sec->data;
}
void print(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    Node*head=takeInput();
    print(head);
    int k;
    cout<<endl;
    cout<<"enter ith position : ";
    cin>>k;
    findNode(head,k);
}
