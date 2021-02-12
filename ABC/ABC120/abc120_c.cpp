#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int n;
	long long cnt;
	map<char, long long> mp;

	cin >> s;
	cnt = 1000000000000000000;
	n = s.size();
	mp['0'] = 0;
	mp['1'] = 0;
	rep(i, n)
	{
		mp[s[i]]++;
	}
	for(auto p : mp)
	{
		cnt = min(cnt, p.second);
	}
	cout << (long long)cnt * 2<< endl;
	return 0;
}
