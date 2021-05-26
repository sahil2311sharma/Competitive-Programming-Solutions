/*	STACK	*/
// author : sahil sharma

#include<iostream>
#include<queue>
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
#define eb					emplace_back
#define mp 					make_pair

#define ff 					first
#define ss 					second

#define	newline				cout<<endl;
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

#define srt(a)			sort(a.begin(),a.end());
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

template<typename T>
class Stack
{
	queue<T>q1, q2;
public:
	void push(T x)
	{
		q1.push(x);
	}
	void pop()
	{
		if (q1.empty())
		{
			return;
		}
		while (q1.size() > 1) {
			T element = q1.front();
			q2.push(element);
			q1.pop();
		}
		q1.pop();
		swap(q1, q2);
	}
	T top() {
		while (q1.size() > 1)
		{
			T element = q1.front();
			q2.push(element);
			q1.pop();
		}
		T element = q1.front();
		q1.pop();
		q2.push(element);
		swap(q1, q2);
		return element;
	}
	int size() {
		return q1.size() + q1.size();
	}
	bool empty() {
		return size() == 0;
	}
};

void chalochale()
{
	Stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	while (!s.empty())
	{
		cout << s.top() << ",";
		s.pop();
	}
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
