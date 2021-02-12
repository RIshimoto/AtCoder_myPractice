#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, h, cnt, a_max; cin >> n >> h;
	vector<long long> a(n), b(n);
	a_max = 0;
	rep(i, n)
	{
		cin >> a.at(i) >> b.at(i);
		a_max = max(a_max, a.at(i));
	}
	sort(b.rbegin(), b.rend());
	cnt = 0;
	rep(i, n)
	{
		if (h <= 0 || a_max > b.at(i))
			break;
		h -= b.at(i);
		cnt++;
	}
	if (h > 0)
	{
		cnt += h / a_max;
		if (h % a_max != 0)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
