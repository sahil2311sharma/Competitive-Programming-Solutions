#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
struct queue
{
    int size,cap;
    int*arr;
    queue(int c)
    {
        cap=c;
        size=0;
        arr=new int[cap];
    }
    void enque(int x);
    void deque();
    void getfront();
    void getrear();
    void isfull();
    void isempty();
}
struct queue::enque(int x)
{
    if(isfull())
    {
        return;
    }
    arr[size]=x;
    size++;
}

struct queue::deque(int x)
{
    if(isfull())
    {
        return;
    }
    for(int i=0;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
}
bool isfull()
{
    return(size==cap);
}
bool isempty()
{
    return(size==0);
}
int getfront()
{
    if(isempty())
    {
        return -1;
    }
    return 0;
}
int getrear()
{
    if(isempty())
    {
        return -1;
    }
    return size-1;
}
int main()
{

    return 0;
}