#include <bits/stdc++.h>
#define rep(i, n) for(int i = 1; i <= (n); i++)
using namespace std;

signed main(void)
{
	int n, ans, diff;
	cin >> n;
	ans = diff = 10000000;
	rep(i, (int)sqrt(n))
	{
		diff = min(diff,  n / i - i);
		ans = min(ans, n - i * (n / i) + diff);
	}
	cout << ans << endl;
	return 0;
}
