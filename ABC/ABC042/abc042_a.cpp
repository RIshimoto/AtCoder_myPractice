#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, c;
	map<int, int> mp;
	cin >> a >> b >> c;
	mp[a]++;
	mp[b]++;
	mp[c]++;
	bool ok = true;
	for (auto p : mp)
	{
		if (p.first == 5)
		{
			if (p.second != 2)
				ok = false;
		}
		else if (p.first == 7)
		{
			if (p.second != 1)
				ok = false;
		}
		else
			ok = false;
	}
	if (ok)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
