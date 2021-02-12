#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	string s;
	map<char, int> mp;
	ll cnt;

	cin >> s;
	cnt = 0;
	rep(i, s.size())
	{
		mp[s[i]]++;
	}
	for(auto p : mp)
	{
		auto k = p.first;
		auto v = p.second;
		if (k == '(' || k == ')')
			cnt += min(mp['('], mp[')']);
		else if (k == '[' || k == ']')
			cnt += min(mp['['], mp[']']);
		else if (k == || k == '}')
			cnt += min(mp['{'], mp['}']);
		else
		{
			cnt += v;
		}
		cout << k << " : " << cnt << endl;
	}
	cout << cnt << endl;
	return 0;
}
