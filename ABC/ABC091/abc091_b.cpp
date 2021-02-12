#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, ans;
	map<string, int> mp;

	cin >> n;
	rep(i, n)
	{
		string s;
		cin >> s;
		mp[s]++;
	}
	cin >> m;
	rep(i, m)
	{
		string t;
		cin >> t;
		mp[t]--;
	}
	ans = 0;
	for(auto p : mp)
	{
		ans = max(ans, p.second);
	}
	cout << ans << endl;
	return 0;
}
