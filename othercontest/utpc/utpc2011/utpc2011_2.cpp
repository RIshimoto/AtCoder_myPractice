#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int cnt;
	cin >> s;
	cnt = 0;
	if (s.size() % 2 == 1)
	{
		if (s[s.size() / 2] == '(' || s[s.size() / 2] == ')')
			cnt++;
	}
	rep(i, s.size() / 2)
	{
		if (s[i] == ')')
		{
			if (s[s.size() - 1 - i] != '(')
				cnt++;
		}
		else if (s[i] == '(')
		{
			if (s[s.size() - 1 - i] != ')')
				cnt++;
		}
		else 
		{
			if (s[i] != s[s.size() - 1 - i])
				cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
