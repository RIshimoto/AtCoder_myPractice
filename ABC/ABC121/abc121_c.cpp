#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m;
	cin >> n >> m;
	long long sum, buy;
	vector<pair<long long, long long>> a(n);

	rep(i, n) cin >> a[i].first >> a[i].second;
	sort(a.begin(), a.end());
	buy = sum = 0;
	rep(i, n)
	{
		if (buy + a[i].second > m)
		{
			sum += (m - buy) * a[i].first;
			break;
		}
		else
		{
			buy += a[i].second;
			sum += a[i].first * a[i].second;
		}
	}
	cout << sum << endl;
	return 0;
}
