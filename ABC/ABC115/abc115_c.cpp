#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	int n, k, ans, mini;
	cin >> n >> k;
	vector<int> h(n), diff(n);
	map<int, int > mp;

	ans = (int)1e9;
	rep(i, n) cin >> h[i];
	sort(h.begin(), h.end());
	rep(i, n - k + 1)
	{
		ans = min(ans, h[i + k - 1] - h[i]);
	}
	cout << ans << endl;
	return 0;
}
