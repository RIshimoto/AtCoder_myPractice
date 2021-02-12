#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, ans;
	cin >> n;
	vector<pair<int, int>> p(n);
	rep(i, n) cin >> p[i].first >> p[i].second;
	sort(p.begin(), p.end());
	cin >> m;
	vector<int> t(m);
	rep(i, m) cin >> t[i];
	rep(i, m)
	{
		int hi, lo, mid;
		hi = n - 1;
		lo = 0;
		while(hi - lo > 1)
		{
			mid = (hi + lo) / 2;
			if (p[mid].first <= t[i])
				lo = mid;
			else
				hi = mid;
		}
		ans = p[lo].second + max(0, t[i] - p[lo].first);
		cout << ans << endl;
	}
	return 0;
}
