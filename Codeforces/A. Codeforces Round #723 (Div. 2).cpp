/*	Person With Largest Age		*/
// author : sahil sharma

#include<bits/stdc++.h>

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;


//=============================================CONSTANTS=============================================

const long long SZ = 1e5 + 7;
const long long inf = 1e18;
const long long mod = 1e9 + 7;
const long long MOD = 998244353;
const long long PI = 3.1415926535897932384;

//=============================================MACROS=============================================

#define pb 					push_back
#define pf 					push_front
#define eb					emplace_back

#define mp 					make_pair
#define pq 					priority_queue

#define ff 					first
#define ss 					second

#define	newline				endl;
#define newline1			cout<<endl;
#define	tab					"\t"

#define Max(a,b)            ((a > b) ? a : b)
#define Min(a,b)            ((a < b) ? a : b)

#define lb 					lower_bound
#define ub 					upper_bound
#define mx 					*max_element
#define mn 					*min_element


#define take				cin>>
#define show				cout<<
#define ll					long long
#define lli					long long int

#define ci(X)               long long X; cin >> X
#define cii(X, Y)           long long X, Y; cin >> X >> Y
#define ciii(X, Y, Z)       long long X, Y, Z; cin >> X >> Y >> Z

#define FastIO 		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define kitnalega           long long ___tc; cin >> ___tc; while (___tc-- > 0)
#define fo(n) 				for(int i=0;i<n;i++)
#define fon(i,n)			for(int i=1;i<=n;i++)
#define foab(i,a,b) 		for(int i=a;i<=b;i++)



//=============================================FUNCTIONS=============================================

#define srt(a)			sort(a,a+n);
#define rev(a)			reverse(a.begin(),a.end());


//=============================================Input/Output=============================================

void start_func()
{	FastIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

//=============================================CODE=============================================

void chalochale() {
	ci(n);
	n *= 2;
	int arr[n];
	fo(n) {
		cin >> arr[i];
	}
	srt(arr);
	for (int i = 0; i < n / 2; i++)
	{
		cout << arr[i] << " " << arr[n - 1 - i] << " ";
	}
	cout << endl;
}

int32_t main()
{
	start_func();
	kitnalega
	{
		chalochale();
	}
	return 0;
}