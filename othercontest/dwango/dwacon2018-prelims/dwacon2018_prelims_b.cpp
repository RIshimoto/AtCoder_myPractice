#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	cin >> s;
	int n = s.size();
	vector<char> v[n];
	vector<bool> b(n, true);
	rep(i, s.size())
	{
		if (s[i] == '2')
		{
			rep(j, n)
			{
				if (b[j])
				{
					v[j].push_back(s[i]);
					b[j] = false;
					break;
				}
			}

		}
		else if (s[i] == '5')
		{
			bool ok;
			ok = true;
			rep(j, n)
			{
				if (!b[j])
				{
					v[j].push_back(s[i]);
					b[j] = true;
					ok = false;
					break;
				}
			}
			if (ok)
			{
				cout << -1 << endl;
				return 0;
			}
		}
	}
	int cnt = 0;
	rep(i, n)
	{
		if (v[i].size() == 0) continue;
		int m = v[i].size() - 1;
		if (v[i][m] == '2')
		{
			cout << -1 << endl;
			return 0;
		}
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}
