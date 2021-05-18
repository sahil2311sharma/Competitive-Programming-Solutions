// author : sahil sharma

#include<bits/stdc++.h>
using namespace std;
#define FIO 			ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mod				1000000007
#define w(x)            int x; cin>>x; while(x--)

#define si(x)			scanf("%d",&x)
#define sl(n)			scanf("%lld",&n)
#define ss(s)			scanf("%s",s)
#define pi(x)			printf("%d\n",x)
#define pl(x)			printf("%lld\n",x)
#define ps(s)			printf("%s\n",s)

#define fo(i,n) 		for(int i=0;i<n;i++)
#define fon(i,n)		for(int i=2;i<=n;i++)
#define foab(i,a,b) 	for(int j=a;j<=b;j+=i)

#define ll				long long
#define lli				long long int
#define pb 				push_back
#define eb				emplace_back
#define srtt(a)			sort(a.begin(),a.end());
#define rev(a)			reverse(a.begin(),a.end());
#define span(a) 		begin(a), end(a)
#define lb 				lower_bound
#define ub 				upper_bound
#define pb 				push_back
#define mp 				make_pair
#define F 				first
#define S 				second

//*------------------------------------------------*//
//					Templates
template <typename ForwardIterator, class T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key) {
	while (start != end) {
		if (*start == key) {
			return start;
		}
		start++;
	}
	return end;
}

//-----------Input SRT - Output SRT-----------//
void start_func()
{	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
//-----------Input END - Output END-----------//

void sahil_main() {
	ll n, m, count = 0;
	cin >> n >> m;
	vector<int> v (n + 1, 1);
	fon(i, n)
	{
		ll check = m % i;
		count += v[check];
		for (int j = check; j <= n; j += i)
		{
			v[j]++;
		}
	}
	cout << count << endl;
}

int32_t main()
{
	start_func();
	w(t)	{	sahil_main();	}
	//solve();
	return 0;
}
