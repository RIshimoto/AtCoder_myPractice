#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

const int mod = 1e5;
signed main(void)
{
	int n, m, k;
	int from, to;
	ll ans;

	cin >> n >> m;
	vector<ll> sum(n + 1, 0);
	rep(i, n - 1) cin >> sum[i + 1]; 
	rep(i, n) sum[i + 1] += sum[i];
	from = 0;
	ans = 0;
	rep(i, m)
	{
		cin >> k;
		to = max(min(from + k, n), 0);
		ans += abs(sum[to] - sum[from]);
		from = to;
	}
	cout << ans % mod << endl;
	return 0;
}
