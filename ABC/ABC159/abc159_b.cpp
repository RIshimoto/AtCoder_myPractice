#include <bits/stdc++.h>
#define For(i, a, b) for(int i = (a); i <(b); i++)
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, t, u;
	cin >> s;

	int n;
	stack<char> sta;
	string tmp;

	n = s.size();
	rep(k, 3)
	{
		tmp = "";
		if (k == 0)
		{
			rep(i, n) sta.push(s[i]);
			while(!sta.empty())
			{
				tmp += sta.top();
				sta.pop();
			}
			if (tmp != s)
			{
				cout << "No" << endl;
				return 0;
			}
		}
		if (k == 1)
		{
			rep(i, (n - 1) / 2)
			{
				t += s[i];
				sta.push(s[i]);
			}
			while(!sta.empty())
			{
				tmp += sta.top();
				sta.pop();
			}
			if (tmp != t)
			{
				cout << "No" << endl;
				return 0;
			}
		}	
		if (k == 2)
		{
			For(i, (n + 3) / 2 - 1, n)
			{
				u += s[i];
				sta.push(s[i]);
			}
			while(!sta.empty())
			{
				tmp += sta.top();
				sta.pop();
			}
			if (tmp != u)
			{
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}
