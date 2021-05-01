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
Node*takeInput_better()
{
    int data;
    cin>>data;
    Node*head=NULL;
    Node*tail=NULL;
    while(data!=-1)
    {
        Node*newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}
Node* deleteNode(Node*head)
{
    Node*temp=head;
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        head=temp->next;
        delete temp;
        return head;
    }
}
void print(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    cout<<"Enter data in the linked list :";
    Node*head=takeInput_better();
    cout<<"Linked List Before Deleting First Node is : ";
    print(head);
    cout<<"\n";
    
    head=deleteNode(head);
    cout<<"Linked List After Deleting ith Node is  : ";
    print(head);
    return 0;
}