// author : sahil sharma
 
#include<bits/stdc++.h>
using namespace std;
#define FIO 			ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define w(x)            int x; cin>>x; while(x--)
#define for0(n) 		for(int i=0;i<n;i++)
#define for1(n)			for(int i=1;i<=n;i++)
#define forab(i,a,b) 	for(int i=a;i<=b;i++)
#define ll				long long
#define lli				long long int
#define pb 				push_back
#define srtt(a)			sort(a.begin(),a.end());
#define rev(a)			reverse(a.begin(),a.end());
 
//-------------------------------------------------//
 
void start_func()
{	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
 
void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int check = false;
	char first;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != s[i + 1])
		{
			first = s[i];
		}
		//cout << first << "---";
		for (int j = i + 1; j < s.size(); j++)
		{
			//cout << s[j];
			if (s[j] == first)
			{
				//cout << "!!!!";
				check = true;
				break;
			}
		}
		if (check == true)
		{
			break;
		}
	}
	if (check == true)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
	}
}
 
int32_t main()
{
	start_func();
	w(t)	{	solve();	}
	//solve();
	return 0;
}