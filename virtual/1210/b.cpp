#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n;
	cin >> n;
	int a;
	map<int, int> mp;
	rep(i, n) 
	{
		cin >> a;
		mp[a]++;
	}
	ll ans;
	ans = 0;
	for (auto p : mp)
	{
		if (p.second - p.first < 0)
			ans += p.second;
		else
			ans += p.second - p.first ;
	}
	cout << ans << endl;
	return 0;
}
