#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,c=0,ans;
        cin>>n;
        k=n;
        while(k>0)
        {
            k=k/2;
            c++;
        }
        c=c-1;
        ans=pow(2,c);
        cout<<(ans-1)<<endl;
    }
    return 0;
}