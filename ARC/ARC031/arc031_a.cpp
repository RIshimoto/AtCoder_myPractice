#include  <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	bool ok;

	cin >> s;
	ok = true;
	rep(i, s.size() / 2 + 1)
	{
		if (s[i] != s[s.size() - 1 - i])
			ok = false;
	}
	if (ok)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
