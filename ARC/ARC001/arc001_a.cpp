#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, maxi, mini;
	string s;
	map<int, int> mp;
	cin >> n >> s;
	rep(i, n)
	{
		mp[s[i]]++;
	}
	maxi = 0;
	mini = 1e9;
	if (mp.size() != 4) mini = 0;
	for(auto p: mp)
	{
		maxi = max(p.second, maxi);
		mini = min(p.second, mini);
	}
	cout << maxi << " " << mini << endl;
	return 0;
}
