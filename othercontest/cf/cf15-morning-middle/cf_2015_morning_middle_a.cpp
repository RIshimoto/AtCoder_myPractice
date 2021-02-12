#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k, m, r;
	cin >> n >> k >> m >> r;
	vector<int> v(n - 1);
	long long sum, ans;

	rep(i, n - 1) cin >> v[i];
	sort(v.rbegin(), v.rend());
	sum = 0;
	rep(i, k - 1) sum += v[i];
	if (n > k && sum + v[k - 1] >= (long long)r * k)
	{
		cout << 0 << endl;
		return 0;
	}
	ans = (long long) r * k - sum;
	if (ans > m)
		cout << -1 << endl;
	else if (ans <= 0)
		cout << 0 << endl;
	else 
		cout << ans << endl;
	return 0;
}
