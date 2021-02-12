#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

signed main(void)
{
	int n, m, q;
	map<char, P> mp;
	char c;

	cin >> n >> m >> q;
	rep(i, n) rep(j, m)
	{
		cin >> c;
		if (c != '*')
			mp[c] = P(i + 1, j + 1);
	}
	rep(i, q)
	{
		cin >> c;
		auto p = mp[c];
		if (p.first == 0 && p.second == 0)
			cout << "NA" << endl;
		else
		cout << p.first << " " << p.second << endl;
	}
	return 0;
}
