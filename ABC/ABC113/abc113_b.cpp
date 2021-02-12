#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	int n, t, a;
	cin >> n >> t >> a;
	int h[n];
	vector<pair<double, int>> tmp(n);
	rep(i, n)
	{
		cin >> h[i];
		tmp[i].first = abs((t - h[i] * 0.006) - a);
		tmp[i].second = i + 1;
	}
	sort(tmp.begin(), tmp.end());
	cout << tmp[0].second << endl;
	return 0;
}
