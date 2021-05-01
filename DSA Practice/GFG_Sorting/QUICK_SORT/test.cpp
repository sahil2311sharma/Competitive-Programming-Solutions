#include<iostream>
#include<algorithm>
using namespace std;
/*
int LumatoPartition(int arr[],int l,int h)
{
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return (i+1);
}
*/
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
/*
Lomeuto partition
void quickSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int t=hoarsePartition(arr,l,h);
        quickSort(arr,l,t-1);
        quickSort(arr,t+1,h);
    }
}*/

//Hoares partition
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
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}