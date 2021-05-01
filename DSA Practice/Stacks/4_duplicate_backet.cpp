#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

bool duplicate(string s)
{
	stack<int> st;
	for(char ch:s)
	{
		if(ch==')')
		{
			char top=st.top();
			st.pop();
			int count=0;
			while(top!='(')
			{
				++count;
				top=st.top();
				st.pop();
			}
			if(count<1)
			{
				return 1;
			}
		}
		else
		{
			st.push(ch);
		}
	}
	return false;
}

int main()
{
	string s;
	cin>>s;
	if(duplicate(s))
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}