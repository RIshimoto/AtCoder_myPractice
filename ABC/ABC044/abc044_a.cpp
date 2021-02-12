#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n, k, x, y;
	int ans;
	cin >> n >> k >> x >> y;
	ans = 0;
	if (n < k)
		ans += n * x;
	else
	{
		ans += k * x;
		n -= k;
		ans += n * y;
	}
	cout << ans << endl;
	return 0;
}
