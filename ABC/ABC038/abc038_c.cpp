#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, tmp_i;
	long long ans;
	cin >> n;
	int a[n];
	bool ok;

	rep(i, n) cin >> a[i];
	ans = n;
	ok = false;
	rep(i, n - 1)
	{
		if (a[i] < a[i + 1])
		{
			if (!ok) tmp_i = i;
			ok = true;
			ans++;
		}
		else
			ok = false;
		if (ok)
		{
			if ((i + 1) - tmp_i > 1)
				ans += (i + 1) - tmp_i - 1;
		}
	}
	cout << ans << endl;
	return 0;
}
