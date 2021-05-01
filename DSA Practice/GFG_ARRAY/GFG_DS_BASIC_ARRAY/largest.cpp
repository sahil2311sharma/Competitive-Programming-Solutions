#include<iostream>
using namespace std;
int main()
{
    int n,pos,largest;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter values into array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<"Largest : "<<largest;
    return 0;
}