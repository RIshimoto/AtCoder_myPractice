#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int ans;
int solve(string s, string t)
{
	int a, b;
	a = atoi(s.c_str());
	b = atoi(t.c_str());
	return ans = max(ans, a - b);
}
signed main(void)
{
	string s, t, tmp;

	cin >> s >> t;
	ans = -1000;
	tmp = s;
	rep(i, 3)
	{
		s[i] = '9';
		solve(s, t);
		s = tmp;
	}
	tmp = t;
	rep(i, 3)
	{
		if (i == 0)
			t[i] = '1';
		else
			t[i] = '0';
		solve(s, t);
		t = tmp;
	}
	cout << ans << endl;
	return 0;
}
