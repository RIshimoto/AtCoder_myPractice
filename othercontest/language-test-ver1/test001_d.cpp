#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	vector<bool> ok(367, false);
	for (int i = 0; i <= 366; i+=7)
		ok[i] = true;
	for (int j = 1; j <= 366; j+=7)
		ok[j] = true;

	int n;
	ll ans, cnt;
	cin >> n;
	rep(l, n)
	{
		string s;
		int m, d, k;

		cin >> s;
		m = 0;
		k = 0;
		while (s[k] != '/')
		{
			m = m * 10 + (s[k] - '0');
			k++;
		}
		k++;
		d = 0;
		while (k < s.size())
		{
			d = d * 10 + (s[k] - '0');
			k++;
		}
		for(k = 1; k < m; k++)
		{
			if (k == 4 || k == 6 || k == 9 || k == 11)  
				d += 30;
			else if (k == 2)
				d += 29;
			else
				d += 31;
		}
		for (k = d; k <= 366; k++)
		{
			if (!ok[k])
			{
				ok[k] = true;
				break;
			}
		}
	}
	cnt = ans = 0;
	for (int i = 1; i <= 366; i++)
	{
		if (ok[i])
		{
			cnt++;
			ans = max(ans, cnt);
		}
		else
			cnt = 0;
	}
	cout << ans << endl;
	return 0;
}
