#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	string s;
	map<char, int> mp; 
	cin >> n >> s;
	mp['1'] = mp['2'] = mp['3'] = mp['4'] = 0;
	rep(i, n)
	{
		mp[s[i]]++;
	}
	int mx, mn;
	mx = 0;
	mn = 1e9;
	for (auto p : mp)
	{
		mx = max(p.second, mx);	
		mn = min(p.second, mn);	
	}
	cout << mx << " " << mn << endl;
	return 0;
}
