#include<bits/stdc++.h>

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;

//=============================================CONSTANTS=============================================

const long long SZ = 1e5 + 7;
const long long inf = 1e18;
const long long mod = 1e9 + 7;
const long long MOD = 998244353;
const long long PI = 3.1415926535897932384;

//=============================================MACROS=============================================

#define w(x)            int x; cin>>x; while(x--)
#define fo(n) 			for(int i=0;i<n;i++)
#define fon(i,n)		for(int i=1;i<=n;i++)
#define foab(i,a,b) 	for(int i=a;i<=b;i++)
#define take			cin>>
#define show			cout<<
#define ll				long long
#define lli				long long int
#define pb 				push_back
#define eb				emplace_back
#define lb 				lower_bound
#define ub 				upper_bound
#define mp 				make_pair
#define ff 				first
#define ss 				second
#define	newline			cout<<endl;


#define srt(a)			sort(a.begin(),a.end());
#define rev(a)			reverse(a.begin(),a.end());


using namespace std;

ll another_main[100010][110][2];
ll another_arr[100010];

void solve() {
	ll n, K;
	cin >> n >> K;
	for (int i = 1; i <= n; i++)
	{
		cin >> another_arr[i];
	}
	for (int i = 1; i <= n + 3; i++)
		for (int j = 0; j <= K + 2; j++)
			another_main[i][j][0] = another_main[i][j][1] = -1e16;
	another_main[n + 1][K][0] = another_main[n + 1][K][1] = 0;
	for (int idx = n; idx >= 1; idx--)
	{
		for (int k = 0; k <= K; k++)
		{
			another_main[idx][k][0] = max(another_main[idx + 1][k][0], another_main[idx + 1][k + 1][1] + another_arr[idx] * (k + 1));
			another_main[idx][k][1] = max(another_main[idx][k][0], another_main[idx + 1][k][1] + another_arr[idx] * k);
		}
	}
	cout << another_main[1][0][0] << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t; cin >> t;
	while (t--) solve();
}