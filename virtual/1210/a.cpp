#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, sum;
	cin >> n;
	int a[n];
	sum = 0;
	rep(i, n)
	{
		cin >> a[i];
		sum += a[i];
	}
	cin >> m;
	rep(i, m)
	{
		int p, x, ans;
		cin >> p >> x;
		p--;
		ans = sum;
		ans = ans - a[p] + x;
		cout << ans << endl;
	}
	return 0;
}
