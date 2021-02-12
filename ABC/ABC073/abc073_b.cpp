#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, ans;

	cin >> n;
	ans = 0;
	rep(i, n)
	{
		int l, r;
		cin >> l >> r;
		ans += r - l + 1;
	}
	cout << ans << endl;
	return 0;
}
