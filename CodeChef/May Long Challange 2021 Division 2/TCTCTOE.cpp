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
#define fon(i,n)		for(int i=1;i<=n;i++)
#define foab(i,a,b) 	for(int i=a;i<=b;i++)
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
	char table[3][3];
	int x = 0, o = 0, _o = 0;
	int first = 0, sec = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			char local;
			cin >> table[i][j];
			local = table[i][j];
			if (local == 'X')
			{
				x++;
			}
			else if (local == 'O')
			{
				o++;
			}
			else
			{
				_o++;
			}
		}
	}
	if (table[0][0] == 'X' && table[0][1] == 'X' && table[0][2] == 'X')		first++;
	if (table[1][0] == 'X' && table[1][1] == 'X' && table[1][2] == 'X')		first++;
	if (table[2][0] == 'X' && table[2][1] == 'X' && table[2][2] == 'X')		first++;
	if (table[0][0] == 'X' && table[1][0] == 'X' && table[2][0] == 'X')		first++;
	if (table[0][1] == 'X' && table[1][1] == 'X' && table[2][1] == 'X')		first++;
	if (table[0][2] == 'X' && table[1][2] == 'X' && table[2][2] == 'X')		first++;
	if (table[0][0] == 'X' && table[1][1] == 'X' && table[2][2] == 'X')		first++;
	if (table[2][0] == 'X' && table[1][1] == 'X' && table[0][2] == 'X')		first++;

	if (table[0][0] == 'O' && table[0][1] == 'O' && table[0][2] == 'O')		sec++;
	if (table[1][0] == 'O' && table[1][1] == 'O' && table[1][2] == 'O')		sec++;
	if (table[2][0] == 'O' && table[2][1] == 'O' && table[2][2] == 'O')		sec++;
	if (table[0][0] == 'O' && table[1][0] == 'O' && table[2][0] == 'O')		sec++;
	if (table[0][1] == 'O' && table[1][1] == 'O' && table[2][1] == 'O')		sec++;
	if (table[0][2] == 'O' && table[1][2] == 'O' && table[2][2] == 'O')		sec++;
	if (table[0][0] == 'O' && table[1][1] == 'O' && table[2][2] == 'O')		sec++;
	if (table[2][0] == 'O' && table[1][1] == 'O' && table[0][2] == 'O')		sec++;


	if ((first == 1 && sec == 1) || (o > x) || x - o > 1)	cout << 3 << endl;
	else if (first == 0 && sec == 1 && o == x)				cout << 1 << endl;
	else if (first == 1 && sec == 0 && o < x)				cout << 1 << endl;
	else if (first == 2 && _o == 0 )						cout << 1 << endl;
	else if ((first + sec == 0) && _o == 0)					cout << 1  << endl;
	else if ((first + sec == 0) && _o > 0)					cout << 2  << endl;
	else													cout << 3 << endl;


}

int32_t main()
{
	start_func();
	w(t)	{	sahil_main();	}
	//solve();
	return 0;
}
