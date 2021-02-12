#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, ans;
	string s;
	cin >> n >> s;
	map<char,int> mp;
	rep(i, n)
	{
		mp[s[i]]++;
	}
	ans = 0;
	for(auto p : mp)
	{
		auto v = p.second;
		ans += v % 2;
	}
	cout << ans << endl;
	return 0;
}
