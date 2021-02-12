#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	vector<int> a(n);
	double ans;

	rep(i, n) cin >> a.at(i);
	sort(a.rbegin(), a.rend());
	ans = 0;
	rep(i, n)
	{
		if (i % 2 == 0)
			ans += a[i] * a[i];
		else
			ans -= a[i] * a[i];
	}
	cout << fixed << setprecision(12) << ans * 3.14159265358979 << endl;
	return 0;
}
