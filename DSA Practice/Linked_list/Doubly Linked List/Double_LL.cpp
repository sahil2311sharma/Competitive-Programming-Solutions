// Doubly linked list
/*#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int d)
    {
        data=d;
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
};
Node*insertBig(Node*head,int data)
{
    Node*newNode=new Node(data);
    newNode->next=head;
    if(head!=NULL)
    {
        head->prev=newNode;
    }
    return newNode;
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
    head=insertBig(head,data);
    print(head);
}*/


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
}/*
Node*insertNode(Node*head)
{
    // Insert at head
    /*Node*newNode=new Node(data);
    newNode->next=head;
    if(head!=NULL)
    {
        head->prev=newNode;
    }
    return newNode;
    */
    
    
    // Insert at End
    /*
    Node*newNode=new Node(data);
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
    */
    
    
    // delete from head;
    /*Node*temp=head;
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        head=temp->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
    */


    //delete from end
    /*Node*temp=head;
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete head;
        return head;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->prev->next=NULL;
    delete temp;
    return head;
}*/
void display(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node*reverse(Node*head)
{
    Node*curr=head;
    Node*bef=NULL;
    while(curr!=NULL)
    {
        bef=curr->next;
        curr->next=curr->prev;
        curr->prev=bef;
        head=curr;
        curr=bef;
    }
    return head;
}
int main()
{
    Node*head=takeInput();
    display(head);
    /*int data;
    cin>>data;*/
    cout<<endl;
    head=reverse(head);
    display(head);
    return 0;
}

/*
Node*reverse(Node*head)
{
    Node*curr=head;
    Node*prev=NULL;
    while(curr!=NULL)
    {
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    return prev;
}*/


/*

#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*prev;
    Node*next;
    Node(int data)
    {
        this->data=data;
        next=prev=NULL;
    }
};
Node*insertHead(Node*head,int data)
{
    Node*newNode=new Node(data);
    newNode->next=head;
    if(head!=NULL)
    {
        head->prev=newNode;
    }
    return newNode;
}
Node*insertEnd(Node*head,int data)
{
    Node*newNode=new Node(data);
    Node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
    return head;
}

Node*delete(Node*head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node*temp=head;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    else{
        head=temp->next;
        delete(temp);
        head->prev=NULL;
        return head;
    }    
}


Node*deleteEnd(Node*head)
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
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    delete(temp->next);
    temp->prev=temp;
    temp->next=NULL;
    return head;

}

Node*reverse(Node*head)
{
    Node*curr=head;
    Node*prev;
    while(curr!=NULL)
    {
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    return prev;
}

*/