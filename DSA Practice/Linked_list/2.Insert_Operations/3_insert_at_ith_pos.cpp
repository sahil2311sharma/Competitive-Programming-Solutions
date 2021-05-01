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
Node*insertNode(Node*head,int i,int data)
{
    Node*newNode=new Node(data);
    int count=0;
    if(head==NULL)
    {
        return NULL;
    }
    Node*temp=head;
    if(i==0)
    {
        newNode->next=head;
        head=newNode;
        return head;
    }
    while(count<i-1&&temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL)
    {
        Node*a=temp->next;
        temp->next=newNode;
        newNode->next=a;
    }
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
    int i,data;
    cin>>i>>data;
    head=insertNode(head,i,data);
    print(head);
}