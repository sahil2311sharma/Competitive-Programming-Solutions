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
void printList(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main()
{
    Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    printList(head);
    return 0;
}