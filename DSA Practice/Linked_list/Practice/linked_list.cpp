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
Node*insertNode(Node*head,int data,int pos)
{
    int count=0;
    Node*temp=head;
    Node*newNode=new Node(data);
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
Node*insertNode_sorted(Node*head,int insert)
{
    Node*newNode=new Node(insert);
    if(head==NULL)
    {
        return NULL;
    }
    if(head->data>insert)
    {
        newNode->next=head;
        head=newNode;
        return head;
    }
    Node*temp=head;
    while(temp->next!=NULL&&temp->next->data<insert)
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
Node*delete_beg(Node*head)
{
    Node*temp=head;
    head=temp->next;
    delete(temp);
    return head;
}
Node* delete_end(Node*head)
{
    Node*temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=NULL;
    return head;
}
Node*delete_pos(Node*head,int i)
{
    Node*temp=head;
    if(head==NULL)
    {
        return NULL;
    }
    int count=0;
    if(i==0)
    {
        head=temp->next;
        delete (temp);
        return head;
    }
    while(temp!=NULL&&count<i-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL)
    {
        Node*a=temp->next;
        Node*b=a->next;
        temp->next=b;
        delete (a);
    }
    return head;
}
void middle(Node*head)
{
    Node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    Node*temp1=head;
    for(int i=0;i<count/2;i++)
    {
        temp1=temp1->next;
    }
    cout<<temp1->data;
}
Node*reverse(Node*head)
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
}
/*Node*reverse(Node*head,Node*prev)
{
    if(head==NULL)      
    {    
        return prev;    
    }
    Node*next=head->next;
    head->next=prev;
    return reverse(next,head);
}*/
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
    int data,pos;
    cout<<"\nEnter data and position to insert: ";
    cin>>data>>pos;
    head=insertNode(head,data,pos);
    cout<<"After insertion list is: ";
    print(head);
    int insert;
    cout<<"\nEnter element to insert : ";
    cin>>insert;
    cout<<"Sorted list is: ";
    head=insertNode_sorted(head,insert);
    print(head);
    cout<<"\nMiddle Node is: ";
    middle(head);
    cout<<"\nAfter deleting the first Node: ";
    head=delete_beg(head);
    print(head);
    cout<<"\nAfter deleting the Last Node: ";
    head=delete_end(head);
    print(head);
    int i;
    cout<<endl;
    cout<<"Enter the position to be deleted : ";
    cin>>i;
    head=delete_pos(head,i);
    print(head);
    cout<<endl;
    cout<<"Reverse of the list is : ";
    head=reverse(head);
    print(head);
    /*
    Node*prev=NULL;
    head=reverse(head,prev);
    print(head);
    */
}