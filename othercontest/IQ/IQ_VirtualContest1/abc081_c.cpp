#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0;i < (n); i++)
using namespace std;

signed main(void)
{
	int n, mx_a, mx_b;
	cin >> n;
	map<int, int> mp;
	rep(i, n)
	{
		int a;
		cin >> a;
		mp[a]++;
	}
	mx_a = mx_b = 0;
	for(auto p : mp)
	{
		auto k = p.first;
		auto v = p.second;
		if (v >= 2)
		{
			if (mx_a < k)
			{
				mx_b = mx_a;
				mx_a = k;
			}
			else if (mx_b < k)
			{
				mx_b = k;
			}
			if (v >= 4)
				mx_b = max(mx_b, k);
		}
	}
	cout << (long long) mx_a * mx_b << endl;
	return 0;
}
