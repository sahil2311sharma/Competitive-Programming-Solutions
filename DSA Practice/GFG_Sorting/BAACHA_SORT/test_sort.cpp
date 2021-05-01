#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    /*int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }*/

    /*
        bubble sort
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }*/
    
    /*
        selection sort
    for(int i=0;i<n;i++)
    {
        int mid=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mid])
            {
                mid=j;
            }
        }
        swap(arr[mid],arr[i]);
    }
    */

    /*
        insertion sort
    for(int i=1;i<n;i++)
    {
       int key=arr[i];
       int j=i-1;
       while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    */
    /*for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }*/
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    /*
    int c[n+m];
    for(int i=0;i<n;i++)
    {
        c[i]=arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        c[n+i]=arr2[i];
    }
    sort(c,c+n+m);
    for(int i=0;i<n+m;i++)
    {
        cout<<c[i]<<" ";
    }*/
    
    /*
    int i=0,j=0;
    while(i<n && j<m)
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
    while(i<n)
    {
        cout<<arr1[i++]<<" ";
    }
    while(j<m)
    {
        cout<<arr2[j++]<<" ";
    }
    */
   
    return 0;  
}