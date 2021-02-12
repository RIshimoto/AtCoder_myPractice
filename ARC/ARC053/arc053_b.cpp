#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	map<char, int> mp;
	int n, cnt;

	cin >> s;
	n = s.size();
	rep(i, s.size())
	{
		mp[s[i]]++;
	}
	cnt = 0;
	for(auto p : mp)
	{
		auto k = p.first;
		auto v = p.second;
		if (v % 2 != 0)
			cnt++;
	}
	if (cnt == 0)
		cout << n << endl;
	else
		cout << 2 * ((n - cnt) / (2 * cnt)) + 1 << endl;
	return 0;
}
