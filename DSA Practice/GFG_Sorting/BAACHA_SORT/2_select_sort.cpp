#include<iostream>
#include<limits>
#define INF (unsigned)!((int)0)
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    /*int temp[n];
    for(int i=0;i<n;i++)
    {
        int min=0;
        for(int j=1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp[i]=arr[min];
        arr[min]=INF;
    }*/
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }

    /*
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
    */
    cout<<"Final: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}