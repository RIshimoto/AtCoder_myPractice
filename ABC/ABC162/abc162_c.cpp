#include <bits/stdc++.h>
#define rep(i, n) for(int i = 1; i <= n; i++)
using namespace std;

int gcd(int x, int y)
{
	if (y == 0) return x;
	return gcd(y, x%y);
}
signed main(void)
{
	int k;
	long long ans;
	cin >> k;

	ans = 0;
	rep(i, k) rep(j, k) rep(l, k)
	{
		ans += gcd(gcd(i, j), l);
	}
	cout << ans << endl;
	return 0;
}
