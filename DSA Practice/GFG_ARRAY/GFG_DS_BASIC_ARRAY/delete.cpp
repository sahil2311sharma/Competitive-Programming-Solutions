#include<iostream>
using namespace std;
int main()
{
    int n,pos,nnn;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter values into array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter number to be deleted :";
    cin>>nnn;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==nnn)
        {
            pos=i;
        }

    }
    for(int i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<"\nArray elements after deletion are :";
     for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}