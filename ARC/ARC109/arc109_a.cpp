#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int a, b, x, y;
	int ans;
	cin >> a >> b >> x >> y;
	ans = 1e9;
	if (a > b)
	{
		ans = min(ans, x + y * (a - b - 1));
		ans = min(ans, x * ((a - b) * 2 - 1));
	}
	else
	{
		ans = min(ans, x + y * (b - a));
		ans = min(ans, x * ((b - a) * 2 + 1));
	}
	cout << ans << endl;
	return 0;
}
