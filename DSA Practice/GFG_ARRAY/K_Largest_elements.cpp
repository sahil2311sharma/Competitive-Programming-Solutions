#include<iostream>
using namespace std;
int main()
{
    int n,k,temp;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int j=n-1;j>=k+1;j--)
    {
        cout<<arr[j]<<" ";
    }
    
    return 0;
}