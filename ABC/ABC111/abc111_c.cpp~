#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	long long n, ans, maxi, max_e, max_o, sec_o, sec_e;
	cin >> n;
	map<long long, long long> odd;
	map<long long, long long> even;
	rep(i, n / 2)
	{
		long long e, o;
		cin >> e >> o;
		even[e]++;
		odd[o]++;
	}
	sec_o = sec_e = max_o = max_e = 0;
	maxi = 0;
	for(auto e : even)
	{
		auto k = e.first;
		auto v = e.second;
		if (maxi <= v)
		{
			maxi = v;
			sec_e = max_e;
			max_e = k;
		}
		else if (even[sec_e] <= v)
			sec_e = k;
	}
	maxi = 0;
	for(auto o : odd)
	{
		auto k = o.first;
		auto v = o.second;
		if (maxi <= v)
		{
			maxi = v;
			sec_o = max_o;
			max_o = k;
		}
		else if (odd[sec_o] <= v)
			sec_o = k;
	}
	if (max_e == max_o)
		ans = min(n - even[sec_e] - odd[max_o],\
				n - even[max_e] - odd[sec_o]);
	else
		ans = n - even[max_e] - odd[max_o];
	cout << ans << endl;
	return 0;
}
