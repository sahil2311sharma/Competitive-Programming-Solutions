#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
int printList(Node *head,int x)
{
    int pos=1;
    while(head!=NULL)
    {
        //int pos=1;
        if(head->data==x)
        {
            return pos;
        }
        else
        {
            pos++;
            head=head->next;
        }
    }
    return -1;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    int d;
    cin>>d;
    cout<<printList(head,d);

    return 0;
}