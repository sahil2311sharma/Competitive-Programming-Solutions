#include<bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;
#define FIO 			ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define w(x)            int x; cin>>x; while(x--)
#define INF             1000000007
#define rr 				return 0
#define for0(n) 		for(ll i=0;i<n;i++)
#define for1(n)			for(int i=1;i<=n;i++)
#define forab(i,a,b) 	for(int i=a;i<=b;i++)
#define ll				long long
#define lli				long long int
#define pb 				push_back
#define srt(a)			sort(a,a+n);
#define srtt(a)			sort(a.begin(),a.end());
#define rev(a)			reverse(a.begin(),a.end());
/*
	if (n & (n - 1))
	to check is n is power of 2 or not
*/
void start_func()
{
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
	int n;
	cin >> n;
	int tot = 0;
	for0(n)
	{
	    ll number;
	    cin>>number;
		tot = (tot+ number + INF) % INF;
	}
	ll q;
	cin >> q;
	while(q--)
	{
		tot = (2 * tot) % INF;
		cout << tot << "\n";
	}
}

int32_t main()
{
	start_func();
	//w(t)	{	solve();	}
	solve();
	rr;
}