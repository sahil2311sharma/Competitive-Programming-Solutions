#include <iostream>
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
void printList(Node *head)
{
  if(head==NULL)
  {
    return;
  }
  else
  {
    cout<<(head->data)<<" ";
    printList(head->next);
  }
}
int main() 
{
  Node *head = new Node(2);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  printList(head);
  return 0;
}
