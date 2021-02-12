#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m;
	cin >> n >> m;
	vector<int> p(n), q;
	int ans;

	rep(i, n) cin >> p[i];
	p.push_back(0);
	rep(i, n + 1) for (int j = i; j <= n; j++)
	{
		if (p[i] + p[j] <= m)
			q.push_back(p[i] + p[j]);
	}
	sort(q.begin(), q.end());
	ans = 0;
	rep(i, q.size())
	{
		int hi, lo, mid;
		lo = 0; hi = q.size();
		while (hi - lo > 1)
		{
			mid = (hi + lo) / 2;
			if (q[mid] < m - q[i])
			{
				lo = mid;
				ans = max(ans, q[mid] + q[i]);
			}
			else
				hi = mid;
		}
	}
	cout << ans << endl;
	return 0;
}
