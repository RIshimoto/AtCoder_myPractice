#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, T, t, tmp, cnt;
	cin >> n >> T >> tmp;

	cnt = 0;
	rep(i, n - 1)
	{
		cin >> t;
		cnt += min(T, t - tmp);
		tmp = t;
	}
	cnt += T;
	cout << cnt << endl;
	return 0;
}
