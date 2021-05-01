#include<iostream>
using namespace std;
/*class Node
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
*/
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
Node*insertStart(Node*head,int data)
{
    /*
    Node*newNode=new Node(data);
    if(head==NULL)
    {
        return newNode;
    }
    Node*temp=head;
    newNode->next=head;
    head=newNode;
    return head;
    */
    Node*newNode=new Node(data);
    if(head==NULL)
    {
        return newNode;
    }
    newNode->next=head;
    if(head!=NULL)
    {
        head->prev==NULL;
    }
    return newNode;
    
}
Node*insertEnd(Node*head,int data1)
{
    /*
    Node*newNode=new Node(data1);
    Node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    temp=newNode;
    return head;
    */
    Node*newNode=new Node(data1);
    if(head==NULL)
    {
        return newNode;
    }
    Node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
    return head;
}
Node*insertPos(Node*head,int data2,int pos)
{
    Node*newNode=new Node(data2);
    if(head==NULL)
    {
        return NULL;
    }
    if(pos==0)
    {
        newNode->next=head;
        head=newNode;
        return head;
    }
    int count=0;
    Node*temp=head;
    while(temp!=NULL&&count<pos-1)
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
Node*insertSorted(Node*head,int data3)
{
    Node*newNode=new Node(data3);
    if(head==NULL)
    {
        return NULL;
    }
    if(data3<head->data)
    {
        newNode->next=head;
        head=newNode;
        return head;
    }
    Node*temp=head;
    while(temp!=NULL&&temp->next->data<data3)
    {
        temp=temp->next;
    }
    if(temp!=NULL)
    {
        Node*a=temp->next;
        temp->next=newNode;
        newNode->next=a;
    }
    return head;
}
void middle(Node*head)
{
    /*
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
    */
    Node*fast=head;
    Node*slow=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}
void NthNode(Node*head,int pos1)
{
    Node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    temp=head;
    int find=count-pos1;
    for(int i=0;i<find;i++)
    {
        temp=temp->next;
    }
    cout<<temp->data;
}
Node* reverse(Node*head)
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
Node*deleteStart(Node*head)
{
    /*
    if(head==NULL)
    {
        return NULL;
    }
    Node*temp=head;
    head=temp->next;
    delete(temp);
    return head;
    */
    if(head==NULL)
    {
        return NULL;
    }
    Node*temp=head;
    head=temp->next;
    delete(temp);
    temp->prev=NULL;
    return head;
}
Node*deleteEnd(Node*head)
{
    /*
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete(head);
        return NULL;
    }
    Node*temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=NULL;
    return head;
    */
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete(head);
        return NULL;
    }
    Node*temp=head;
    while(head->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=NULL;
    return head;
}
Node*deleteMiddle(Node*head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete(head);
        return NULL;
    }
    /*
    int count=0;
    while(head!=NULL)
    {
        head=head->next;
        count++;
    }
    Node*temp=head;
    for(int i=0;i<(count/2)-1;i++)
    {
        temp=temp->next;
    }
    if(temp!=NULL)
    {
        Node*a=temp->next;
        Node*b=a->next;
        temp->next=b;
        delete a;
    }
    return head;
    */
    Node*fast=head;
    Node*slow=head;
    Node*prev;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        prev=slow;
        slow=slow->next;
    }
    prev->next=slow->next;
    delete slow;
    return head;
}
Node*deletePos(Node*head,int pos2)
{
    Node*temp=head;
    if(pos2==0)
    {
        head=temp->next;
        delete(temp);
        return head;
    }
    int count=0;
    while(temp!=NULL&&count<pos2-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL)
    {
        Node*a=temp->next;
        Node*b=a->next;
        temp->next=b;
        delete a;
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
    cout<<"\nEnter the value to insert at starting : ";
    cin>>data;
    head=insertStart(head,data);
    print(head);
    int data1;
    cout<<"\nEnter the value to be insert at end : ";
    cin>>data1;
    head=insertEnd(head,data1);
    print(head);
    int data2,pos;
    cout<<"\nEnter the value and position where it to be inserted : ";
    cin>>data2>>pos;
    head=insertPos(head,data2,pos);
    print(head);
    int data3;
    cout<<"\nEnter the element to be insert in a sorted linked list : ";
    cin>>data3;
    head=insertSorted(head,data3);
    print(head);
    cout<<"\nYour middle node of the linked list is : ";
    middle(head);
    int pos1;
    cout<<"\nEnter the position of the node from last you want : ";
    cin>>pos1;
    NthNode(head,pos1);
    cout<<"\nReverse of the linked list is : ";
    head=reverse(head);
    print(head);
    cout<<"\nOriginal linked list is : ";
    head=reverse(head);
    print(head);
    cout<<"\nAfter deleting the first Node linked list looks like : ";
    head=deleteStart(head);
    print(head);
    cout<<"\nAfter deleting the Last Node linked list looks like : ";
    head=deleteEnd(head);
    print(head);
    cout<<"\nYour middle node of the linked list is : ";
    middle(head);
    cout<<"\nAfter deleting the middle Node linked list is : ";
    head=deleteMiddle(head);
    print(head);
    int pos2;
    cout<<"\nEnter the postion of the Node to be deleted : ";
    cin>>pos2;
    head=deletePos(head,pos2);
    cout<<"Your Linked list after deletion of ith Node is : ";
    print(head);
    return 0;
}