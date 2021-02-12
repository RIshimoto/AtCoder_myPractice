#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i <(n); i++)
using namespace std;
typedef long long ll;
using P=pair<ll, ll>;

signed main(void)
{
	int h, w;
	cin >> h >> w;
	string s[h];
	rep(i, h) cin >> s[i];
	int cnt = 0;
	rep(i, h)
	{
		rep(j, w - 1)
		{
			if (s[i][j] == '.' && s[i][j + 1] == '.')
				cnt++;
		}
	}
	rep(i, h - 1)
	{
		rep(j, w)
		{
			if (s[i][j] == '.' && s[i + 1][j] == '.')
				cnt++;
		}
	}
	cout << cnt << endl;
	return (0);
}
