#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, q;
	string s;
	cin >> n >> q >> s;
	int l[q], r[q], cnt[n + 1];
	rep(i, q) cin >> l[i] >> r[i];
	rep(i, n + 1) cnt[i] = 0;
	for(int i = 1; i <= n; i++)
	{
		if ("AC" == s.substr(i - 1, 2))
			cnt[i + 1]++;
	}
	rep(i, n + 1) cnt[i + 1] += cnt[i];
	rep(i, q)
		cout << cnt[r[i]] - cnt[l[i]] << endl;
	return 0;
}
