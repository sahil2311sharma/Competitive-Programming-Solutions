#include<iostream>
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
Node*insertNode(Node*head,int data)
{
    Node*newNode=new Node(data);
    if(head==NULL)
    {
        return NULL;
    }
    if(data<head->data)
    {
        newNode->next=head;
        head=newNode;
        return newNode;
    }
    Node*temp=head;
    while(temp->next!=NULL && temp->next->data < data)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
}
Node*takeInput()
{
    int data;
    cin>>data;
    Node*head=NULL;
    Node*tail=NULL;
    while(data!=-1)
    {
        Node*newNode= new Node(data);
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
    int data;
    cin>>data;
    head=insertNode(head,data);
    print(head);
}