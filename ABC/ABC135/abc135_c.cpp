#include <bits/stdc++.h>
#define For(i, a, b) for(long long i = (a); i < (b); i++)
#define rep(i, n) For(i, 0, n)
using namespace std;

signed main(void)
{
	long long n, cnt;
	vector<long long> a, b;

	cin >> n;
	rep(i, n + 1) {long long x; cin >> x; a.push_back(x);}
	rep(i, n) {long long x; cin >> x; b.push_back(x);}
	cnt = 0;
	rep(i, n)
	{
		if (a[i] - b[i] < 0)
		{
			cnt += a[i];
			b[i] -= a[i];
			a[i] = 0;
			if (a[i + 1] - b[i] < 0)
			{
				cnt += a[i + 1];
				a[i + 1] = 0;
			}
			else
			{
				cnt += b[i];
				a[i + 1] -= b[i];
			}
		}
		else
		{
			cnt += b[i];
			a[i] -= b[i];
		}
	}
	cout << cnt << endl;
	return 0;
}
