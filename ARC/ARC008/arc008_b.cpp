#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, ans, cnt;
	string s, t;
	map<char, int> sp, tp;
	cin >> n >> m >> s >> t;
	rep(i, n) sp[s[i]]++;
	rep(i, m) tp[t[i]]++;
	ans = 0;
	for(auto p : sp)
	{
		auto k = p.first;
		auto v = p.second;
		if (!tp.count(k))
		{
			ans = -1;
			break;
		}
		cnt = v / tp[k];
		if (v % tp[k] != 0)
			cnt++;
		ans = max(ans, cnt);
	}
	cout << ans << endl;
	return 0;
}
