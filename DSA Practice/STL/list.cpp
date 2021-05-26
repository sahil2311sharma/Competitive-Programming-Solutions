/*list*/
// author : sahil sharma

#include<bits/stdc++.h>
using namespace std;
#define FIO 			ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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
#define	tab				"\t"

#define srt(a)			sort(a.begin(),a.end());
#define rev(a)			reverse(a.begin(),a.end());


int solve()
{
	cout << "syntax to declare a list and inserting elements into a list" << endl;
	list<int>l = {10, 20, 30, 40, 20, 50};
	l.pb(80);
	/*for (auto i : l) {cout << i << "\t"; }*/

	newline
	cout << "display elements of a list" << endl;
	for (auto it = l.begin(); it != l.end(); it++)
	{
		cout << *it << tab;
	}
	newline
	newline
	cout << "Removing all elements from the list having number 20" << endl;
	l.remove(20);
	for (auto i : l) {
		cout << i << "\t";
	}
	newline


	cout << "How to remove an element in a list from a particular position" << endl;
	auto pos = l.begin();
	pos++;
	pos++;
	pos++;
	l.erase(pos);
	for (auto i : l) {
		cout << i << tab;
	}
	newline


	cout << "Insert an element in a list at a particular position" << endl;

	auto poss = l.begin();
	poss++;
	l.insert(poss, 200);
	for (auto i : l)
	{
		cout << i << tab;
	}
	newline


	cout << "Removing the last element from the list" << endl;
	l.pop_back();
	for (auto i : l)
	{
		cout << i << tab;
	}
	newline

	cout << "Removing the front element from the list" << endl;
	l.pop_front();
	for (auto i : l)
	{
		cout << i << tab;
	}
	newline

	cout << "Function to sort a list" << endl;
	l.sort();
	for (auto i : l)
	{
		cout << i << tab;
	}
	newline

	cout << "Function to reverse a list" << endl;
	l.reverse();
	for (auto i : l)
	{
		cout << i << tab;
	}
	newline
}


void start_func()
{	FIO;
#ifndef Jaadu
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
	start_func();
	// w(t)	{solve(); }
	solve();
}
