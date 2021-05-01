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
/*Node*insertNodehead(Node*head,int data)
{
    Node*newNode=new Node(data);
    newNode->next=head;
    head=newNode;
    return head;
}
*/
/*Node*insert_Node_Tail(Node*head,int data)
{
    int count=0;
    Node*newNode=new Node(data);
    Node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    return head;
}*/
/*
Node*insertNode_at_pos(Node*head,int i,int data)
{
    Node*newNode=new Node(data);
    if(i==0)
    {
        newNode->next=head;
        head=newNode;
        return head;
    }
    int count=0;
    Node*temp=head;
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
}*/

/*Node*delNode_end(Node*head)
{
    Node*temp=head;
    head=temp->next;
    delete temp;
    return head;
}*/
/*
Node*delNode_end(Node*head)
{
    Node*temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head;
}*/
/*
Node*delete_at_pos(Node*head,int i)
{
    int count = 0;
    if(head==NULL)
    {
        return NULL;
    }
    Node*temp=head;
    if(i==0)
    {
        head=temp->next;
        delete temp;
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
        Node*b=a->next;
        delete a;
        temp->next=b;
    }
    return head;
}*/
/*
Node*sortedInsert(Node*head,int data)
{
    Node*newNode=new Node(data);
    if(head==NULL)
    {
        return NULL;
    }
    Node*temp=head;
    if(data<temp->data)
    {
        newNode->next=head;
        //head=newNode;
        return head;
    }
    while(temp->next!=NULL&&temp->next->data < data)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
}*/
void printMiddle(Node*head)
{
    if(head==NULL)
    {
        return;
    }
    /*int count=0;
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
   Node*fast=head,*slow=head;
   while(fast!=NULL&&fast->next!=NULL)
   {
       slow=slow->next;
       fast=fast->next->next;
   }
   cout<<slow->data;
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
    //int i;
    //cin>>i;
    //int data;
    //cin>>data;
    
    //Insert at head

    //head=insertNode(head,data);
    //print(head);
    
    //Insert at end

    //head=insert_Node_Tail(head,data);
    //print(head);
    
    //Insert at a given position

    //head=insertNode_at_pos(head,i,data);
    //print(head);

    //delete from head

    //head=delNode(head);
    //print(head);

    //delete from end

    //head=delNode_end(head);
    //print(head);

    //int i;
    //cin>>i;
    //delete from position

    //head=delete_at_pos(head,i);
    //print(head);

    //sorted insert

    /*int data;
    cin>>data;

    head=sortedInsert(head,data);
    print(head);*/
    printMiddle(head);
    return 0;
}