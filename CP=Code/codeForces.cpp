#include <bits/stdc++.h>
using namespace std;

//=============================================CONSTANTS=============================================
const long long SZ = 1e5 + 7;
const long long inf = 1e18;
const long long mod = 1e9 + 7;
const long long PI = 3.1415926535897932384;
//const long long MOD = 998244353;
//=============================================MACROS=============================================

#define rep(i, star, lastt) for (long long int i = star; i < lastt; i++)
#define pb push_back
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cout.tie(NULL);                   \
	cin.tie(NULL);
#define cl(X)        \
	long long int X; \
	cin >> X
#define clll(X, Y, Z)      \
	long long int X, Y, Z; \
	cin >> X >> Y >> Z

#define pr cout <<
int32_t main()
{
	FastIO;
	cl(t);
	long long test = 0;
	while (t--)
	{
		test++;
		cout << "Case #" << test << ": ";
		clll(child, n, k);
		vector<vector<long long int>> graph(child + 1);
		rep(i, 0, n)
		{
			clll(vertex, fir, las);
			rep(j, fir, las + 1)
			{
				graph[j].pb(vertex);
			}
		}
		long long int result = 0;
		long long int another_ans = 0;
		vector<long long int> sec;
		for (auto x : graph)
		{
			sec = x;
			another_ans = 0;
			sort(sec.begin(), sec.end(), greater<long long int>());
			rep(i, 0, min(k, (long long int)sec.size()))
			{
				another_ans += sec[i];
			}
			result = max(result, another_ans);
		}
		pr result << "\n";
	}
	return 0;
}