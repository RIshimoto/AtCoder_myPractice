#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i <(n); i++)
using namespace std;

signed main(void)
{
	int n, sum, ans;
	string s;
	map<char, int> mp;
	cin >> n >> s;
	ans = 0;
	rep(i, n) mp[s[i]]++;
	rep(i, n)
	{
		string x, y;
		map<char, int> st;
		sum = 0;
		x = s.substr(0, i);
		rep(j, x.size())
		{
			st[x[j]]++;
		}
		for(auto p : st)
		{
			if (mp[p.first] - p.second != 0)
				sum++;
		}
		ans = max(ans, sum);
	}
	cout << ans << endl;
	return 0;
}
