#include<iostream>
#include<algorithm>
/*
    merge sort with extra space.
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
    
    int c[m+n];
    for(int i=0;i<m;i++)
    {
        c[i]=arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        c[i+m]=arr2[i];
    }
    sort(c,c+m+n);
    
    for(int i=0;i<m+n;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;  
}