#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, tmp;
	string s;
	vector<string> v, t;
	bool ok;

	getline(cin, s);
	cin >> n;
	rep(i, n)
	{
		string u;
		cin >> u;
		t.push_back(u);
	}
	s += ' ';
	tmp = 0;
	rep(i, s.size())
	{
		if (s[i] == ' ')
		{
			v.push_back(s.substr(tmp, i - tmp));
			tmp = i + 1;
		}
	}
	rep(j, v.size())
	{
		ok = false;
		rep(i, n)
		{
			if (v[j].size() == t[i].size())
			{
				ok = true;
				rep(k, v[j].size())
				{
					if (t[i][k] == '*' || v[j][k] == '*')
						continue;
					else if (t[i][k] != v[j][k])
						ok = false;
				}
				if (ok) break;
			}
		}
		if (ok)
		{
			rep(i, v[j].size())
				cout << '*';
		}
		else
			cout << v[j];
		cout << endl;
	}
	return 0;
}
