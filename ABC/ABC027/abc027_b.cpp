#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, ans, cnt, sum, ave;
	cin >> n;
	int a[n], diff[n];

	sum = 0;
	rep(i, n)
	{
		cin >> a[i];
		sum += a[i];
	}
	if (sum % n != 0)
	{
		cout << -1 << endl;
		return 0;
	}
	ave = sum / n;
	rep(i, n) diff[i] = a[i] - ave;
	cnt = 0;
	ans = 0;
	for(int i = 0; i < n - 1; i++)
	{
		if (diff[i] != 0)
			cnt++;
		else
		{
			ans += cnt;
			cnt = 0;
		}
		diff[i + 1] += diff[i];
	}
	ans += cnt;
	cout << ans << endl;
	return 0;
}
