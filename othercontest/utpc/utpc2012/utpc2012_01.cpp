#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, t, u;
	map<char, int> mp, np;
	bool ok;
	cin >> s;
	t = s.substr(0, 4);
	u = s.substr(5, 2) + s.substr(8, 2);
	rep(i, 4)
	{
		mp[t[i]]++;
		np[u[i]]++;
	}
	ok = true;
	for(auto p : mp)
	{
		auto  k = p.first;
		auto  v = p.second;
		if (np[k] != v)
			ok = false;
	}
	if (ok)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}
