#include<bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;
#define FIO 			ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define w(x)            int x; cin>>x; while(x--)
#define INF             1000000007
#define rr 				return 0
#define for0(n) 		for(int i=0;i<n;i++)
#define for1(n)			for(int i=1;i<=n;i++)
#define forab(i,a,b) 	for(int i=a;i<=b;i++)
#define ll				long long
#define small_zero		if (w <= 0)
#define lli				long long int
#define	greater_2		if (s[arr[i]] >= 2)
#define pb 				push_back
#define srt(a)			sort(a,a+n);
#define check_mul_2		if (res % 2 == 0)
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
	ll n, w, wr;
	cin >> n >> w >> wr;
	ll arr[n];
	for0(n)
	{
		cin >> arr[i];
	}
	map<ll, ll>s;
	for0(n)
	{
		s[arr[i]]++;
	}
	if (wr >= w)
	{
		cout << "YES" << endl;
	}
	else
	{
		w = w - wr;
		for0(n) {
			greater_2{
				ll res = s[arr[i]];
				check_mul_2{
					w = w - res * arr[i];
				}
				else{
					w = w - (res - 1) * arr[i];
				}
				s[arr[i]] = 0;
			}
			small_zero{
				break;
			}
		}
		string ans = (w <= 0) ? "YES" : "NO";
		cout << ans << endl;
	}
}

int32_t main()
{
	start_func();
	w(t)	{	solve();	}
	//solve();
	rr;
}