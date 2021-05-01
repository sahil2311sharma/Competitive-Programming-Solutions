#include<iostream>
using namespace std;
#define max 5
class stack
{
    private:
        int top;
    public:
        stack()   
        {
            top = -1;
        }
        int arr[max];
        bool push(int x);
        int pop();
        void display();
};
bool stack::push(int x)
{
    if(top==max-1)
    {
        cout<<"Stack Overflow";
        return false;
    }
    else
    {
        arr[++top]=x;
        //cout<<endl;
        cout << x << " pushed into stack";
        return true;
    }
    
}
void stack::display()
{
    //cout<<"---------------------------------------------"<<endl;
    cout<<"\nDisplaying the elements of stack";
    for(int i=top;i>=0;i--)
    {
        cout<<"  ";
        cout<<arr[i]<<" ";
    }
    //cout<<"\n---------------------------------------------";
}
int stack::pop()
{
    if(top<0)
    {
        cout<<"Stack Underflow";
    }
    else
    {
        //cout<<"removed from the stack";
        int temp=arr[top];
        arr[top]=0;
        top--;
        return temp;
    }
}
int main()
{
    class stack s;
    s.push(10);
    s.display();
    cout<<"\n";
    //cout<<"---------------------------------------------";
    cout<<"\n";
    s.push(20);
    s.display();
    cout<<"\n";
    //cout<<"---------------------------------------------";
    cout<<"\n";
    s.push(30);
    s.display();
    cout<<"\n";
    //cout<<"---------------------------------------------";
    cout<<"\n";
    cout<<s.pop();
    cout<<" removed from the stack";
    s.display();
    cout<<"\n";
    //cout<<"---------------------------------------------";
    cout<<"\n";
    cout<<s.pop();
    cout<<" removed from the stack";
    s.display();
    cout<<"\n";
    //cout<<"---------------------------------------------";
    cout<<"\n";
    cout<<s.pop();
    cout<<" removed from the stack";
    s.display();
    cout<<"\n";
    //cout<<"---------------------------------------------";
    cout<<"\n";
    return 0;
}

/*

#include<iostream>
using namespace std;
#define max 10
class stack
{
    private:
        int top;
    public:
        int arr[max];
        stack()
        {
            top=-1;
        }
        bool push(int data);
        int pop();
        void display();
        bool isEmpty();
        int peek();
};
bool stack::push(int data)
{
    if(top==max-1)
    {
        cout<<"Stack Overflow"<<endl;
        return false;
    }
    else
    {
        arr[++top]=data;
        cout<<"\n"<<data<<" is pushed into stack"<<endl;
        return true;
    }
}
int stack::pop()
{
    cout<<endl;
    cout<<"----------POPING OUT THE ELEMENT FROM STACK----------"<<endl;
    if(top==-1)
    {
        cout<<"Stack underflow";
    }
    else
    {
        int temp=arr[top];
        cout<<"Popped out element is "<<temp;
        arr[top]=0;
        top--;
        return top;
    }
}
void stack::display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}
bool stack::isEmpty()
{
    cout<<endl;
    cout<<"----------CHECKING WETHER STACK IS EMPTY OR NOT----------"<<endl;
    if(top==-1)
    {
        cout<<"Stack is Empty"<<endl;
        return true;
    }
    else
    {
        cout<<"Stack has elements"<<endl;
        return false;
    }
}
int stack::peek()
{
    cout<<endl;
    cout<<"----------PEEK ELEMENT OF THE STACK IS----------"<<endl;
    if(top==-1)
    {
        cout<<"No Peek Element"<<endl;
    }
    else
    {
        int element=arr[top];
        cout<<"Element at peek is "<<element;
        return element;
    }
}
int main()
{
    class stack s;
    s.isEmpty();
    s.peek();
    s.pop();
    s.push(10);
    s.display();
    s.push(20);
    s.display();
    s.pop();
    s.peek();
    return 0;
}

*/