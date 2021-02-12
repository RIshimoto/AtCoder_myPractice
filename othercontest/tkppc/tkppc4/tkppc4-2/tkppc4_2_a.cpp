#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int x, y, ans;
	cin >> x >> y;
	ans = -1;
	if (y % 2 == 0 || y < 0)
	{
		x = abs(x);
		y /= 2;
		if (x <= y && (y - x) % 2 == 0)
			ans = y;
	}
	cout << ans << endl;
	return 0;
}
