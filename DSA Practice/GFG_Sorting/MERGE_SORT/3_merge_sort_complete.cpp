#include<iostream>
#include<algorithm>
using namespace std;

void merge(int arr[],int l,int mid,int r)
{
    int n1 = mid-l+1 , n2 = r-mid;
    
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        right[j]=arr[mid+1+j];
    }
    int i=0,j=0,t=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[t++]=left[i++];
        }
        else
        {
            arr[t++]=right[j++];
        }
    }
    while(i<n1)
    {
        arr[t++]=left[i++];
    }
    while(j<n2)
    {
        arr[t++]=right[j++];
    }
}

void mergeSort(int arr[],int l,int r)
{
    if(r<=l)
    {
        return;
    }
    int mid=(l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=0,r=n-1;
    mergeSort(arr,l,r);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}