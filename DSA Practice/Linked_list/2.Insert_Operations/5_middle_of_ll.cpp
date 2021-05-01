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

void printMiddle(Node*head)
{
    
    int count=0;
    Node*temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        count++;
    }
    temp=head;
    for(int i=0;i<count/2;i++)
    {
        temp=temp->next;
    }
    cout<<temp->data;
    /*
    if(head==NULL)
    {
        return;
    }
    Node*slow=head,*fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
    */
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
    Node*head=takeInput_better();
    print(head);
    cout<<endl;
    printMiddle(head);
}