#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, x, cnt, dec;
	cin >> n >> x;

	vector<long long> a(n);
	rep(i, n) cin >> a[i];
	cnt = 0;
	rep(i, n - 1)
	{
		if (a[i] + a[i + 1] > x)
		{
			dec = (a[i] + a[i + 1]) - x;
			a[i + 1] -= dec;
			cnt += dec;
			if (a[i + 1] < 0)
				a[i + 1] = 0;
		}
	}
	cout << cnt << endl;
	return 0;
}
