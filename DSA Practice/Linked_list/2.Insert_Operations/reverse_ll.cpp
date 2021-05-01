#include<iostream>
#include<algorithm>
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
Node*takeInput()
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
}/*
Node* reverse(Node*head)
{
    Node*curr=head,*prev=NULL,*next;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}*/
Node*reverse(Node*head)
{
    Node*curr=head;
    Node*prev=NULL;
    while(curr!=NULL)
    {
        Node*next;
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
void display(Node*head)
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
    display(head);
    cout<<endl;
    head=reverse(head);
    display(head);
}