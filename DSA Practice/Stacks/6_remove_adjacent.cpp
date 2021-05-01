//remove all adjacent duplicate in a string
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //   abbaca
    stack<char> str;
    for(int i=0;i<s.length();i++)
    {
        if(str.empty()||s[i]!=str.top())
        {
            str.push(s[i]);
        }
        else
        {
            str.pop();
        }
    }
    string ans="";
    while(!str.empty())
    {
        ans.push_back(str.top());
        str.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    
}