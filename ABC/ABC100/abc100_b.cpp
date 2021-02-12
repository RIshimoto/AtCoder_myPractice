#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int d, n, m, ans;
	cin >> d >> n;
	ans = 1;
	rep(i, d)
	{
		ans *= 100;
	}
	m = ans * (n / 100);
	ans *= n;
	ans += m;
	cout << ans << endl;
	return 0;
}
