/*
    NEAREST SMALLEST TO LEFT
        BRUTE FORCE
*/
/* #include<iostream>
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
    for(int i=0;i<n;i++)
    {
        int next=-1;
        int count=1;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]<arr[i])
            {    
                //next=arr[j];
                count++;
            }
        }
        cout<<count<<" ";
    }
    return 0;
}

 */
//  OPTIMISED SOLUTION

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
    stack<int>str;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(str.size()==0)
        {
            v.push_back(-1);
        }
        else if(str.size()>0 && arr[i]>str.top())
        {
            v.push_back(str.top());
        }
        else if(str.size()>0 && arr[i]<=str.top())
        {
            while (str.size()>0 && arr[i]<=str.top())
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
    for(int ch:v)
    {
        cout<<ch<<" ";
    }
    return 0;
}
/* 

4   5   2   10  8
-1  4   -1  2   2

 */