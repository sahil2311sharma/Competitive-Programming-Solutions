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
    //nsl
    stack<pair<int,int>>str;
    vector<int>vl;
    int pseudo_index=-1;
    for(int i=0;i<n;i++)
    {
        if(str.empty())
        {
            vl.push_back(pseudo_index);
        }
        else if(!str.empty()&&arr[i]>str.top().first)
        {
            vl.push_back(str.top().second);
        }
        else if(!str.empty()&&arr[i]<=str.top().first)
        {
            while (!str.empty()&&arr[i]<=str.top().first)
            {
                str.pop();
            }
            if(str.empty())
            {
                vl.push_back(pseudo_index);
            }
            else
            {
                vl.push_back(str.top().second);
            }
        }
        str.push({arr[i],i});
    }
    
    for(int ch:vl)
    {
        cout<<ch<<" ";
    }
    //nsr
    cout<<endl;
    cout<<"NSR : "<<endl;
    while(!str.empty())
    {
        str.pop();
    }
    pseudo_index=n;
    vector<int>vr;
    for(int i=n-1;i>=0;i--)
    {
        if(str.empty())
        {
            vr.push_back(pseudo_index);
        }
        else if(!str.empty()&&arr[i]>str.top().first)
        {
            vr.push_back(str.top().second);
        }
        else if(!str.empty()&&arr[i]<=str.top().first)
        {
            while (!str.empty()&&arr[i]<=str.top().first)
            {
                str.pop();
            }
            if(str.empty())
            {
                vr.push_back(pseudo_index);
            }
            else
            {
                vr.push_back(str.top().second);
            }
        }
        str.push({arr[i],i});
    }
    reverse(vr.begin(),vr.end());
    for(int ch:vr)
    {
        cout<<ch<<" ";
    }
    int width[n];
    for(int i=0;i<n;i++)
    {
        width[i]=vr[i]-vl[i]-1;
    }
    int area[n];
    for(int i=0;i<n;i++)
    {
        area[i]=width[i]*arr[i];
    }
    int max=area[0];
    for(int i=1;i<n;i++)
    {
        if(area[i]>max)
        {
            max=area[i];
        }
    }
    cout<<endl;
    cout<<"Maximum area is : "<<max;
    return 0;
}