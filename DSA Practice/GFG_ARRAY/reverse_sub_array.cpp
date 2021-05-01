//reverse sub array ---->>>         input--123456       2,4
//output array      ---->>>                1   432   56

#include<iostream>
using namespace std;
int main()
{
    int n,l,r,temp;
    cin>>n>>l>>r;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<l-1;i++)
    {
        cout<<arr[i];
    }
    for(int j=r-1 ;j>=l-1;j--)
    {
        cout<<arr[j];
    }
    for(int i=r;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}