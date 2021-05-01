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
            Node*temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newNode;
        }
        cin>>data;
    }
    return head;
}
Node*deleteNode(Node*head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node*temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete (temp->next);
    temp->next=NULL;
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
    cout<<endl;
    cout<<"After deleting the end Node linked List is :";
    head=deleteNode(head);
    print(head);
}