#include <bits/stdc++.h>
#define rep(i, n) for(int i = 1; i <= n; i++)
using namespace std;

signed main(void)
{
	int n, k;
	double sum[200010];
	double ans;

	cin >> n >> k;
	ans = 0;
	rep(i, n)
	{
		int a;
		cin >> a;
		sum[i] = (double)(a + 1) / 2;
	}
	rep(i, n) sum[i] += sum[i - 1];
	for (int i = k; i <= n; i++)
		ans = max(sum[i] - sum[i - k],ans);
	cout << fixed << setprecision(12) << ans << endl;
	return 0;
}
