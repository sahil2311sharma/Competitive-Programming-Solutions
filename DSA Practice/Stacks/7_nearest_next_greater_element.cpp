/*
    BRUTE FORCE
    O(n^2)

#include<iostream>
#include<algorithm>
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
    int next;
    for(int i=0;i<n;i++)
    {
        next=-1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                next=arr[j];
                break;
            }
        }
        cout<<next<<" ";
    }
    return 0;
}*/

// optimised solution

#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
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
    stack<int> str;
    vector<int>v;
    for(int i=n-1;i>=0;i--)
    {
        if(str.size()==0)
        {
            v.push_back(-1);
        }
        else if(str.size()>0 && str.top()>arr[i])
        {
            v.push_back(str.top());
        }
        else if(str.size()>0 && str.top()<=arr[i])
        {
            while(str.size()>0 && str.top()<=arr[i])
            {
                str.pop();
            }
            if(str.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(str.top());
            }
        }
        str.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    for(int ss:v)
    {
        cout<<ss<<" ";
    }
    return 0;
}
//      1 3 0 0 1 2  4
//      3 4 1 1 2 4 -1

