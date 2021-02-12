#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, t, ans;

	cin >> s >> t;
	reverse(s.begin(), s.end());
	reverse(t.begin(), t.end());
	rep(i, s.size() - t.size() + 1)
	{
		bool ok = true;
		rep(j, t.size())
		{
			if (s[i + j] != '?'&& s[i + j] != t[j])
				ok = false;
		}
		if (ok)
		{
			rep(j, i)
			{
				if (s[j] == '?')
					ans += 'a';
				else
					ans += s[j];
			}
			ans += t;
			FOR (j, ans.size(), s.size())
			{
				if (s[j] == '?')
					ans += 'a';
				else
					ans += s[j];
			}
			reverse(ans.begin(), ans.end());
			cout << ans << endl;
			return 0;
		}
	}
	cout << "UNRESTORABLE" << endl;
	return 0;
}
