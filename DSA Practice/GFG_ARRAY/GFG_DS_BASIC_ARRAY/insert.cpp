#include<iostream>
using namespace std;
int main()
{
    int n,pos;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Values entered in array are :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    ++n;
    int insert;
    cout<<"\nEnter number to be inserted :";
    cin>>insert;
    cout<<"Enter position of number to be inserted :";
    cin>>pos;
    for(int i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=insert;
    cout<<"\nValues entered in array are :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}