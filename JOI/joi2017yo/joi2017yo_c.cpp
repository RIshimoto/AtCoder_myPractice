#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, d, cnt, ans;

	cin >> n >> m >> d;
	string s[n];
	rep(i, n) cin >> s[i]; 
	ans = 0;
	rep(i, n) 
	{
		cnt = 0;
		rep(j, m)
		{
			if (s[i][j] == '#')
				cnt = 0;
			else if (s[i][j] == '.')
				cnt++;
			if (cnt >= d)
				ans++;
		}
	}
	rep(j, m)
	{
		cnt = 0;
		rep(i, n) 
		{
			if (s[i][j] == '#')
				cnt = 0;
			else if (s[i][j] == '.')
				cnt++;
			if (cnt >= d)
				ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
