#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int gcd(int x, int y)
{
	if (y == 0) return x;
	gcd(y, x%y);
}
signed main(void)
{
	int n, ans;
	cin >> n;
	int a[n];

	rep(i, n) cin >> a[i];
	ans = gcd(a[0], a[1]);
	for(int i = 1; i < n - 1; i++)
	{
		ans = gcd(a[i], ans);
	}
	cout << ans << endl;
	return 0;
}
