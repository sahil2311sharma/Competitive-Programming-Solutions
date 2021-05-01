#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,pos,nnn;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter values into array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"Secound largest element in array is : "<<arr[n-2];
    return 0;
}