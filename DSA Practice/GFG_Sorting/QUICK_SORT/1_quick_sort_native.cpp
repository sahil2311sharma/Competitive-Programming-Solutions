#include<iostream>
#include<algorithm>
using namespace std;
//native approach of partion 
void partition(int arr[],int l,int h,int p)
{
    int temp[h-l+1],index=0;
    for(int i=l;i<=h;i++)
    {
        if(arr[i]<=arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=l;i<=h;i++)
    {
        if(arr[i]>arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=0;i<=h;i++)
    {
        arr[i]=temp[i-l];
    }
}

int main()
{
    int n,p;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>p;
    int l=0;
    int h=n-1;
    partition(arr,l,h,p);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}