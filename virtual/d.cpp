#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, t;
	bool ok;

	cin >> s;
	for (int i = s.size() - 1; i >= 0; i--)
	{
		t = s.substr(0, i);
		if (t.size() % 2 == 1) continue;
		ok = true;
		for (int j = 0; j < t.size() / 2; j++)
		{
			if (t[j] != t[t.size() / 2 + j])
				ok = false;
		}
		if (ok)
		{
			int ans  = t.size();
			cout << ans << endl;
			return 0;
		}
	}
	return 0;
}
