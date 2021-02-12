#include<bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
#define INF 1000000;
using namespace std;

signed main(void)
{
	long long k, n, ans, sum, tmp;

	cin >> k >> n;
	long long a[n], dis[n];
	rep(i, n) cin >> a[i];
	rep(i, n - 1) dis[i] = a[i + 1] - a[i];
	dis[n - 1] = k - a[n - 1] + a[0];
	sum = 0;
	rep(i, n) sum += dis[i];
	tmp = sum;
	ans = INF;
	rep(i, n)
	{
		sum = tmp;
		sum -= dis[i];
		ans = min(ans, sum);
	}
	cout << ans << endl;
	return 0;
}
