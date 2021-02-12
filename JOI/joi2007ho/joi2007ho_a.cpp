#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, k, ans;
	cin >> n >> k;
	vector<int> a(n), sum(n + 1);
	sum[0] = 0;
	rep(i, n) 
	{
		cin >> a[i];
		sum[i + 1] = a[i];
	}
	rep(i, n)
		sum[i + 1] += sum[i];
	ans = 0;
	for(int i = k; i <= n; i++)
		ans = max(ans, sum[i] - sum[i - k]);
	cout << ans << endl;
	return 0;
}
