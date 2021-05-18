// author : sahil sharma

#include<bits/stdc++.h>
using namespace std;
#define int long long

#define w(x)            int x; cin>>x; while(x--)
#define fastIO()        ios_base::sync_with_stdio(0),cin.tie(0)
#define si(x)			scanf("%d",&x)
#define sl(n)			scanf("%lld",&n)
#define ss(s)			scanf("%s",s)
#define pi(x)			printf("%d\n",x)
#define pl(x)			printf("%lld\n",x)
#define ps(s)			printf("%s\n",s)

#define fo(i,n) 		for(int i=0;i<n;i++)
#define fon(i,n)		for(int i=2;i<=n;i++)
#define foab(i,a,b) 	for(int j=a;j<=b;j+=i)

#define int				long long
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

const int ending = 3E5 + 5;

vector<int> next_allot[ending], later_allot, val;
const int mod = 1E9 + 7;
vector<pair<int, int>>dummy;
//*------------------------------------------------*//
//					Templates
//		Linear Search
template <typename T>
int search(T arr[], int n, T key) {
	fo(i, n)
	if (arr[i] == key)
		return i;
	return n;
}

//*------------------------------------------------*//
//		Forward Iterator
template <typename ForwardIterator, class T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key)
{
	while (start != end)
	{
		if (*start == key)
		{
			return start;
		}
		start++;
	}
	return end;
}

void graph(int starting, int before = -1)
{
	for (auto x : next_allot[starting])
	{
		if (x == before)
		{
			continue;
		}
		graph(x, starting);
	}
	dummy.clear();
	{
		for (auto x : next_allot[starting])
		{
			if (x != before)dummy.emplace_back(later_allot[x], x);
		}
		sort(rbegin(dummy), rend(dummy));
		int total = 1;
		for (auto [iii, specific] : dummy)
		{
			val[specific] = total++;
		}
		for (auto x : next_allot[starting])
		{
			if (x != before)
			{
				later_allot[starting] += val[x] * later_allot[x];
			}
		}
	}
}
//-----------Input SRT - Output SRT-----------//

void start_func()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
//-----------Input END - Output END-----------//

bool compare(int a, int b)
{
	return a <= b;
}

void solve()
{
	int num, X;
	cin >> num >> X;
	later_allot.assign(num, 1), val.assign(num, 0);
	for (int i = 0; i < num; i++)
	{
		vector<int>().swap(next_allot[i]);
	}
	for (int i = 0; i < num - 1; ++i)
	{
		int aa, bb;
		cin >> aa >> bb;
		--aa, --bb;
		next_allot[aa].emplace_back(bb), next_allot[bb].emplace_back(aa);
	}
	graph(0);
	cout << later_allot[0] % mod*X % mod << endl;
}


int32_t main()
{
	fastIO();
	w(t)	{	solve();	}
	return 0;
}