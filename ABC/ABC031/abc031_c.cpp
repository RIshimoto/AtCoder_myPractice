#include <bits/stdc++.h>
#define rep(i, n) for(long long i  = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, aoki, tmp_a, tmp_t, tmp, ans;
	cin >> n;
	long long a[n];

	rep(i, n) cin >> a[i];
	ans = -1000000000;
	for(long long i = 0; i < n; i++)
	{
		aoki = -100000000;
		vector<long long> taka;
		for(long long j = 0; j < n; j++)
		{
			if (i == j) continue;
			long long s = min(i, j);
			long long e = max(i, j);
			tmp_a = tmp_t = 0;
			while(s <= e)
			{
				tmp_t += a[s];
				if (s + 1 <= e)
					tmp_a += a[s + 1];
				s+=2;
			}
			if (tmp_a > aoki)
			{
				tmp = tmp_t;
				aoki = tmp_a;
			}
		}
		taka.push_back(tmp);
		sort(taka.rbegin(), taka.rend());
		ans = max(ans, taka[0]);
	}
	cout << ans << endl;
	return 0;
}
