#include<iostream>
#include<algorithm>
using namespace std;
// Hoare's partition

int hoarsePartition(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l-1;
    int j=h+1;
    while(true)
    {
        do
        {
            i++;
        }while(arr[i]<pivot);
        do
        {
            j--;
        }while(arr[j]>pivot);
        
        if(i>=j)
        {
            return j;
        }
        swap(arr[i],arr[j]);
    }
}
void quickSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int t=hoarsePartition(arr,l,h);
        quickSort(arr,l,t);
        quickSort(arr,t+1,h);
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
    quickSort(arr,l,h);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}