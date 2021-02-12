#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

const int INF = 1e9;
signed main(void)
{
	int n, m;
	cin >> m >> n;
	int x_n[n], y_n[n];
	int x_m[m], y_m[m];
	double r[m];
	rep(i, m) cin >> x_m[i] >> y_m[i] >> r[i];
	rep(i, n) cin >> x_n[i] >> y_n[i];
	double ans = INF;
	rep(i, m) ans = min(ans, r[i]);
	rep(i, n)
	{
		for (int j = i + 1; j < n; j++)
			ans = min(
					ans,
					sqrt(pow(x_n[i] - x_n[j], 2) + pow(y_n[i] - y_n[j], 2)) / 2
					);
	}
	rep(i, n)
	{
		rep(j, m)
			ans = min(
					ans,
					abs(sqrt(pow(x_n[i] - x_m[j], 2) + pow(y_n[i] - y_m[j], 2)) - r[j])
					);
	}
	cout << fixed << setprecision(15) << ans << endl;
	return 0;
}

