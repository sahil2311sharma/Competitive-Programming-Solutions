// author : sahil sharma
#include<bits/stdc++.h>
using namespace std;

//=============================================CONSTANTS=============================================
const long long SZ = 1e5 + 7;
const long long inf = 1e18;
const long long mod = 1e9 + 7;
const long long PI = 3.1415926535897932384;
//const long long MOD = 998244353;
//=============================================MACROS=============================================

#define FastIO 						ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define kitnalega           		long long ___tc=1; cin >> ___tc; while (___tc--	)

#define rep(i,x,y)					for(int i=x;i<y;i++)
#define rep_Eq(i,x,y)				for(int i=x;i<=y;i++)
#define rep_Rev(i,x,y)				for(int i=x-1;i>=y;i--)
#define ll							long long
#define lli							long long int

#define ci(X)               		int X; 				cin >> X
#define cii(X, Y)           		int X, Y; 			cin >> X >> Y
#define ciii(X, Y, Z)       		int X, Y, Z;		cin >> X >> Y >> Z
#define ciiii(A,X,Y,Z)				int A,X,Y,Z;		cin >> A >> X >> Y >> Z

#define cl(X)               		ll X; 				cin >> X
#define cll(X, Y)           		ll X, Y; 			cin >> X >> Y
#define clll(X, Y, Z)       		ll X, Y, Z;			cin >> X >> Y >> Z
#define cllll(A,X,Y,Z)				ll A,X,Y,Z;			cin >> A >> X >> Y >> Z


#define cs(s)						string s; 			cin>>s;


#define pb 							push_back
#define pf 							push_front
#define eb							emplace_back
#define endl						"\n"
#define	nl							cout<<endl;
#define sep							cout<<"-----------------"<<endl;

#define mp 							make_pair
#define pq 							priority_queue

#define ff 							first
#define ss 							second

#define Max(a,b)            		((a > b) ? a : b)
#define Min(a,b)            		((a < b) ? a : b)
#define all(x)            			(x).begin(),(x).end()

#define lb 							lower_bound
#define ub 							upper_bound

typedef vector<int> 				vi;
typedef vector<string>				vs;
typedef vector<vi> 					vvi;
typedef vector<ll> 					vll;
typedef pair<int, int>				pii;
typedef pair<ll, ll>				pll;
typedef vector<pii>					vpii;
typedef vector<pll>					vpll;
typedef pair<lli, lli>				pll;


//=============================================FUNCTIONS=============================================

#define srt2(a)					sort(a.begin(),a.end());
#define rev(a)					reverse(a.begin(),a.end());

#define mylb(a,val) 			lower_bound(a.begin(),a.end(),val)
#define myub(a,val) 			upper_bound(a.begin(),a.end(),val)



//=============================================Input/Output=============================================

void start_func()
{	
#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
#endif
}

//=============================================Sieve=============================================

vll prime;
bool isPrime(int n)
{
	if (n == 1) {
			return 1;
	}
	if (n == 2 || n == 3) {
			return true;
  	}
	if (n % 2 == 0 || n % 3 == 0) {
			return false;
	}

	for (int i = 5; i * i <= n; i = i + 6) 
	{
		if (n % i == 0 || n % (i + 2) == 0) 
		{
			return false;
		}
		return true;
	}
	return 1;
}
void sieve(int n)
{
	vector <bool> isPrime(n + 1, true);
	rep(i, 2, n + 1) 
	{
		if (isPrime[i]) 
		{
			prime.push_back(i);
			for (ll j = i * i; j <= n; j++) 
			{
					isPrime[j] = false;
			}
		}
	}
}
void segSieve(int l, int h)
{
	ll sq = sqrt(h);
	sieve(sq);
	vector<bool>isPrime(h - l + 1, true);
	for (ll p : prime) 
	{
		ll sm = (l / p) * p;
		if (sm < l)
			sm += p;
		for (ll m = sm; m <= h; m += p)
			isPrime[m - l] = false;
	}
	int cc = 0;
	int ans = 0;
	rep(i, l, h + 1) 
	{
		if (isPrime[i - l] == true) 
		{
			cout << i << " ";
			//cc++;
		}
		else 
		{
			//cout << i << " ";
		}
	}
	//cout << cc << endl;
	nl
	return;
}
//=============================================GCD=============================================
 
int gcd(int a, int b) 
{
	return b == 0 ? a : gcd(b, a & b);
}
int gcd2(int a, int b) 
{
	while (b != 0) 
	{
		a %= b;
		swap(a, b);
	}
	return a;
}

//----------------------------lcm finder----------------------------
int lcm(int a, int b) 
{
	return (a * b) / gcd(a, b);
}

//extended Euclidian Algorithm  	to find linear Diophatine solution 		(ax+by=g) ==> g=gcd(a,b)

int gcdExt(int a, int b, int &x, int &y) 
{
	if (b == 0) 
	{
		x = 1, y = 0;
		return a;
	}
	int x1, y1;
	int g = gcdExt(b, a % b, x1, y1);
	x = y1, y = x1 - (a / b) * y1;
	return g;
}

//=============================================MAIN CODE=============================================

#define pr cout<<

int chalochale()
{
	ci(n);
	cs(s);
	return n;
}

int32_t main()
{
	FastIO;
	start_func();
	int test_case=0;
	kitnalega
	{
		test_case++;
		cout<< "Case #"<<test_case<<": "<<chalochale();
		nl
	}
	return 0;
}