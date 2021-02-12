#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, x, y, z;
	cin >> n >> x >> y >> z;
	int a[n], b[n];
	int ans;
	rep(i, n) cin >> a[i] >> b[i];
	ans = 0;
	rep(i, n)
	{
		if (a[i] + b[i] >= z && a[i] >= x && b[i] >= y)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
