#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, t;
	char c[26], d[26];

	cin >> s >> t;
	rep(i, 26) c[i] = -1;
	rep(i, 26) d[i] = -1;
	rep(i, s.size())
	{
		int a = s[i] - 'a';
		int b = t[i] - 'a';
		if (c[a] != -1 || d[b] != -1)
		{
			if (c[a] != b || d[b] != a)
			{
				cout << "No" << endl;
				return 0;
			}
		}
		else
		{
			c[a] = b;
			d[b] = a;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
