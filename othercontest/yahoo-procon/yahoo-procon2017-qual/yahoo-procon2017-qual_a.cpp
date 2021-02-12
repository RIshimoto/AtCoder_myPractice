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
	if (mp['y'] == 1 && mp['a'] == 1 && mp['h'] == 1 && mp['o'] == 2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
