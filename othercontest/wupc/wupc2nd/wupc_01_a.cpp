#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, ans;
	cin >> n >> m;
	ans = 0;
	for(int i = 1; i <= n; i++)
	{
		ans += i * i;
		ans %= m;
	}
	cout << ans << endl;
	return 0;
}
