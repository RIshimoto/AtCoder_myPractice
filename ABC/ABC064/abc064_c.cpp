#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, ans, cnt;
	cin  >> n;
	vector<int> a(n);
	bool color[8];

	cnt = ans = 0;
	rep(i, n)
	{
		cin >> a[i];
		if (a[i] >= 3200)
			cnt++;
	}
	rep(i, 8) color[i] = false;
	rep(i, n)
	{
		rep (j, 8)
		{
			if (400 * j <= a.at(i) && a.at(i) < 400 * (j + 1))
			{
				if (!color[j]) ans++;
				color[j] = true;
			}
		}
	}
	if (ans >= 1)
		cout << ans << endl;
	else
		cout << 1 << endl;
	cout << cnt + ans << endl;
	return 0;
}
