#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int data)
    {
        this->data=data;
        next=prev=NULL;
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
}
Node*insertNode(Node*head,int data)
{
    /*
    Node*temp=new Node(data);
    if(head==NULL)
    {
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;
    return temp;
    */
    Node *ptr1 = new Node(data); 
    Node *temp = head;  
    ptr1->next = head;  
  
    if (head!= NULL)  
    {  
        while (temp->next != head)  
            temp = temp->next;  
        temp->next = ptr1;  
    }  
    else
        ptr1->next = ptr1;
        
    head = ptr1;
    
}
void print(Node*head)
{
    Node*temp=head;
    if(head!=NULL)
    {
        do
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        while(temp!=head);
    }
}
int main()
{
    Node*head=takeInput();
    print(head);
    cout<<"Enter the data to be inserted into head : ";
    int data;
    cin>>data;
    head=insertNode(head,data);
    print(head);
}