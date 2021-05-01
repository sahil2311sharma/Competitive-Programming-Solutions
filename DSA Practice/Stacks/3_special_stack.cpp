#include<bits/stdc++.h>
#include<stack>
/*
    not complete
*/
using namespace std;

class stack
{
    private:
        static const int max=10;
        int top;
        int arr[max];
    public:
        stack()
        {
            top=-1;
        }
        bool isEmpty();
        bool isFull();
        int pop();
        bool push(int data);
};
bool stack::isEmpty()
{
    if(top == -1)
    {
        cout<<"\nYour Stack is Empty\n";
        return true;
    }
    else
    {
        cout<<"\nYour stack is not empty\n";
        return false;
    }
}
bool stack::isFull()
{
    if(top==max-1)
    {
        cout<<"\nYour stack is FUll\n";
        return true;
    }
    else
    {
        cout<<"\nYour stack is not full\n";
        return false;
    }
}
int stack::pop()
{
    if(top==-1)
    {
        cout<<"\nStack Underflow\n";
    }
    else
    {
        return arr[top--];
    }
}
bool stack::push(int data)
{
    if(top==max-1)
    {
        cout<<"\nStack Overflow\n";
        return false;
    }
    else
    {
        arr[++top]=data;
        return true;
    }
}
class specialStack::public stack
{
    private:
    stack min;
    public:
        int pop();
        void push(int data);
        int getmin();
};
void specialStack::push(int data)
{
    if(isEmpty()==true)
    {
        stack::push(data);
        min.push(data);
    }
    else
    {
        stack::push(data);
        int y=min.pop();
        min.push(y);
        if(data<y)
        {
            min.push(data);
        }    
        else
        {
            min.push(y);
        }
    }
}
int specialStack::pop()
{
    int x=stack.pop();
    min.pop();
    return x;
}
int specialStack::getMin()
{
    int x = min.pop();
    min.push(x);
    return x;
}

int main()
{
    specialStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.getMin() << endl;
    s.push(5);
    cout << s.getMin();
}