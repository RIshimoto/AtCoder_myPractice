#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m;
	double ans;
	cin >> n >> m;
	if (n - 12 >= 0)
		n -= 12;
	ans = abs((double)m * 6 - (n * 30 + m * 0.5));
	if (ans > 180)
		ans = 360 - ans;
	cout << fixed << setprecision(4) << ans << endl;
	return 0;
}
