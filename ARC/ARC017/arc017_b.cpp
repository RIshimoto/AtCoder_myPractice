#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k, cnt, ans;
	cin >> n >> k;
	int a[n];
	rep(i, n) cin >> a[i];
	cnt = 1;
	ans = 0;
	rep(i, n)
	{
		if (i < n - 1 && a[i] < a[i + 1])
			cnt++;
		else
		{
			if (cnt >= k)
				ans += cnt - k + 1;
			cnt = 1;
		}
	}
	cout << ans << endl;
	return 0;
}
