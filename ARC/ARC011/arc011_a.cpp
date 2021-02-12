#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int m, n, N;
	int ans, tmp;

	cin >> m >> n >> N;
	ans = N;
	while (N / m)
	{
		tmp = N;
		N = tmp / m * n;
		ans += N;
		N += tmp % m;
	}
	cout << ans << endl;
	return 0;
}
