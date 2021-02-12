#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int sum, ans, n, m;
	cin >> n;
	int t[n];
	sum = 0;
	rep(i, n)
	{
		cin >> t[i];
		sum += t[i];
	}
	cin >> m;
	pair<int, int> p[m];
	rep(i, m)
	{
		cin >> p[i].first >> p[i].second;
		p[i].first--;
	}
	rep(i, m)
	{
		ans = sum;
		ans -= t[p[i].first];
		ans += p[i].second;
		cout << ans << endl;
	}
	return 0;
}
