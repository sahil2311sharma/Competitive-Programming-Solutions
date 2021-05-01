/*
    NEAREST SMALLEST TO RIGHT
        BRUTE FORCE

#include<iostream>
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
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                next=arr[j];
                break;
            }
        }
        cout<<next<<" ";
    }
    return 0;
}
*/
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
    for(int i=n-1;i>=0;i--)
    {
        if(str.empty()==true)
        {
            v.push_back(-1);
        }
        else if(str.size()>0 && str.top()<arr[i])
        {
            v.push_back(str.top());
        }
        else if(str.size()>0 && str.top()>=arr[i])
        {
            while(str.size()>0 && str.top()>=arr[i])
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
    for(int ch:v)
    {
        cout<<ch<<" ";
    }
    return 0;
}

/*
5
4   5   2   10  8

2   5   2   10  8
2   2   2   10  8
2   2   -1  10  8
2   2   -1  8   8
2   2   -1  8   -1

*/