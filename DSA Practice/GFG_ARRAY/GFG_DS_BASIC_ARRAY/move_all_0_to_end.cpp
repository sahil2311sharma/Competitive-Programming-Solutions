#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=0;
    cout<<"Enter number of elements in array :";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements in array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    int len=n;
    int temp;
    for(int i=0;i<len;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
    cout<<"Elements after swapping are :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }   
    return 0;
}

/*

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements in array :";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements in array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    int len=n;
    int temp;
    for(int i=0;i<len;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<len;j++)
            {
                if(arr[j]!=0)
                {
                    //temp=arr[i];
                    //arr[i]=arr[j];
                    //arr[j]=temp;
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
    }
    cout<<"Elements after swapping are :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }   
    return 0;
}

*/