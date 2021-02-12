#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string w;
	map<char, int> mp;
	cin >> w;
	rep(i, w.size())
	{
		mp[w[i]]++;
	}
	for (auto p : mp)
	{
		if (p.second % 2 != 0)
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
