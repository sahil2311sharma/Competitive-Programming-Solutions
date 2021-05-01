#include<iostream>
#include<algorithm>
using namespace std;
// Lumato partition

int LumatoPartition(int arr[],int l,int h)
{
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return(i+1);
}
void quisort(int arr[],int l,int h)
{
    if(l<h)
    {
        int p=LumatoPartition(arr,l,h);
        quisort(arr,l,p-1);
        quisort(arr,p+1,h);
    }
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
    int l=0, h=n-1;
    //LumatoPartition(arr,l,h);
    quisort(arr,l,h);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}