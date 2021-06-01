#include<bits/stdc++.h>
using namespace std;
#define FIO 			ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define w(x)            int x; cin>>x; while(x--)
#define INF             1e18
#define rng(n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back

void start_func() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int32_t main()
{
	start_func();
	w(t)
	{
        ll a,b,c,d,k;
        ll X;
        cin >> a >> b >> c >> d >> k;
        X = abs(a-c)+abs(b-d);
        if(X>k) 
            cout << "NO" << endl;
        else if(X==k) 
            cout << "YES" << endl;
        else if((k-X)%2==0) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
	}
	
}