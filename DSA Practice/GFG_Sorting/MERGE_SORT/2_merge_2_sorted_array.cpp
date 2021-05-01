#include<iostream>
#include<algorithm>
/*
    Merging two sorted arrays.
*/
using namespace std;
int main()
{
    int n;
    int m;
    cout<<"Enter size of 1st and 2nd array: ";
    cin>>m>>n;
    int arr1[m];
    cout<<"Enter elements in your 1st array:";
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    int arr2[n];
    cout<<"Enter elements in your 2nd array: ";
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    
    int i=0,j=0;
    while(i<m&&j<n)
    {
        if(arr1[i]>arr2[j])
        {
            cout<<arr2[j++]<<" ";
        }
        else
        {
            cout<<arr1[i++]<<" ";
        }
    }
    while(i<m)
    {
        cout<<arr1[i++]<<" ";
    }
    while(j<n)
    {
        cout<<arr2[j++]<<" ";
    }
    
    return 0;  
}