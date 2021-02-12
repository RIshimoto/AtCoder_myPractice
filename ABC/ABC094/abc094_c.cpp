#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	int a[n], ans1, ans2;
	vector<int> v(n);
	rep(i, n)
	{
		cin >> a[i];
		v[i] = a[i];
	}
	sort(v.begin(), v.end());
	ans1 = v[n / 2 - 1];
	ans2 = v[n / 2];
	rep(i, n)
	{
		if (a[i] <= ans1)
			cout << ans2 << endl;
		else if (a[i] >= ans2)
			cout << ans1 << endl;
	}
	return 0;
}
