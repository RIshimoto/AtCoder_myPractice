#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int n, ans;
	bool ok;

	cin >> s;
	n = s.size();
	ans = 0;
	rep(i, n)
	{
		for (int j = i; j < n; j++)
		{
			string t = s.substr(i, j - i + 1);
			ok = true;
			rep(k, t.size())
			{
				if (t[k] != 'A' && t[k] != 'T' &&\
						t[k] != 'G' && t[k] != 'C')
					ok = false;
			}
			int m = t.size();
			if (ok) ans = max(ans, m);
		}
	}
	cout << ans << endl;
	return 0;
}
