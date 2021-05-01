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
        Node*newNode = new Node (data);
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
Node*InsertNode(Node*head,int data)
{
    Node*newNode= new Node (data);
    newNode->next=head;
    head=newNode;
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
    cout<<"Enter elements in the linked list : ";
    Node*head=takeInput();
    cout<<"Your Linked List is : ";
    print(head);
    int data;
    cout<<"\n\nEnter the Element to be inserted into linked List : ";
    cin>>data;
    head=InsertNode(head,data);
    cout<<"Your Linked List is : ";
    print(head);
    return 0;
}