#include<bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;
#define FIO 			ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define w(x)            int x; cin>>x; while(x--)
#define INF             1e18
#define rr 				return 0
#define for0(n) 		for(int i=0;i<n;i++)
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
	int l, check = 1, count_of_1 = 0, count_of_0 = 0;
	string s, ans;
	cin >> l >> s;
	for0(l)
	{
		if (s[i] == '0')
		{
			count_of_0++;
		}
		else if (s[i] == '1')
		{
			count_of_1++;
		}
		if (count_of_0 > count_of_1)
		{
			continue;
		}
		else if (count_of_1 >= count_of_0)
		{
			check = 0;
			break;
		}
	}
	ans = (check == 0) ? "YES" : "NO";
	cout << ans << endl;
}


int32_t main()
{
	start_func();
	w(t)	{	solve();	}
	//solve();
	rr;
}