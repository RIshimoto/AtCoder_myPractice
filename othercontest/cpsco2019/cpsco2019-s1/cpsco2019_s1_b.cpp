#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	cin >> s;
	map<char, int> mp;
	rep(i, s.size())
	{
		mp[s[i]]++;
	}
	int tmp = 0;
	for(auto p : mp)
	{
		auto v = p.second;
		if (!tmp) tmp = v;
		if (tmp != v)
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
