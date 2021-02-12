#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long a, b, x, ans;
	cin >> a >> b >> x;

	ans = 0;
	ans += b / x;
	if (a > 0)
		ans -= (a - 1) / x;
	else
		ans++;
	cout << ans << endl;
	return 0;
}
