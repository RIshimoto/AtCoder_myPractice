#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	map<char, int> mp;
	string s;
	cin >> s;
	rep(i, s.size())
	{
		mp[s[i]]++;
	}
	cout << mp['1'] << endl;
	return 0;
}
