// STOCK SPAN PROBLEM
// Optimised solution
/*
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
    vector<int>v;
    stack<pair<int,int>>str;
    for(int i=0;i<n;i++)
    {
        if(str.size()==0)
        {
            v.push_back(1);
        }
        else if(str.size()>0&&str.top().first>arr[i])
        {
            v.push_back(str.top().second);
        }
        else 
        {
            while (!str.empty()&&str.top().first<=arr[i])
            {
                str.pop();
            }
            if(str.empty())
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(str.top().second);
            }
        }
        str.push({arr[i],i});
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
   return 0;
}
*/


/*
    BRUTE FORCE
    O(n^2)

#include<iostream>
#include<algorithm>
#include<stack>
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
        int count=1;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]<arr[i])
            {
                count++;
            }
        }
        cout<<count<<" ";
    }
    return 0;
}
*/
/*
7
100 80 60 70 60 75 85

*/

#include<iostream>
#include<stack>
#include<vector>
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
    //stack<int>str;
    stack <pair<int,int>>str;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(str.size()==0)
        {
            v.push_back(-1);
        }
        else if(!str.empty()&&str.top().first>arr[i])
        {
            v.push_back(str.top().second);
        }
        else if (str.size()>0 && arr[i]>=str.top().first)
        {
            while(str.size()>0 && arr[i]>=str.top().first)
            {
                str.pop();
            }
            if(str.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(str.top().second);
            }
        }
        str.push({arr[i],i});
    }
    for(int i=0;i<v.size();i++)
    {
        v[i]=i-v[i];
    }
    for(int ch:v)
    {
        cout<<ch<<" ";
    }
    return 0;
}