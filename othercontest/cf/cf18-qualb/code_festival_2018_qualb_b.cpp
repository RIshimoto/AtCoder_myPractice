#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, x;
	cin >> n >> x;
	vector<pair<int, int>> p(n);
	rep(i, n) 
	{
		int a, b;
		cin >> a >> b;
		p[i].first = b;
		p[i].second = a;
	}
	sort(p.rbegin(), p.rend());
	p[0].second += x;
	long long ans;
	ans = 0;
	rep(i, n)
	{
		ans += p[i].first * p[i].second;
	}
	cout << ans << endl;
	return 0;
}
