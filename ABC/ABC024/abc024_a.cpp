#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int a, b, c, k;
	int s, t;
	int ans;
	cin >> a >> b >> c >> k;
	cin >> s >> t;

	ans = 0;
	ans = a * s + b * t;
	if (s + t >= k)
		ans -= c * (s + t);
	cout << ans << endl;
	return 0;
}
