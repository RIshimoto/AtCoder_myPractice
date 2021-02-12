#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll=long long;
using P = pair<ll, ll>;

signed main(void)
{
	int n;
	int x_i, y_i, x_j, y_j;
	int ans;

	cin >> n;
	vector<P> p(n);
	rep(i, n) cin >> p[i].first >> p[i].second;
	sort(p.begin(), p.end());
	ans = 0;
	for (int i = 0; i < n - 1; i++)
	{
		x_i = p[i].first;
		y_i = p[i].second;
		for (int j = i + 1; j < n; j++)
		{
			x_j = p[j].first;
			y_j = p[j].second;
			P q = P(x_j - y_j + y_i, y_j + x_j - x_i);
			P r = P(x_i - y_j + y_i, y_i + x_j - x_i);
			if (binary_search(p.begin(), p.end(), q) &&\
					binary_search(p.begin(), p.end(), r))
				ans = max(ans, (x_i - x_j) * (x_i - x_j) + (y_i-y_j) * (y_i - y_j));
		}
	}
	cout << ans << endl;
	return 0;
}
