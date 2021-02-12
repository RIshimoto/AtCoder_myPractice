#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n, sum;
	string ans;
	map<string, int> mp;
	cin >> n;
	sum = 0;
	ans = "atcoder";
	for(int i = 0; i < n; i++)
	{
		string s;
		int p;
		cin >> s >> p;
		mp[s] = p;
		sum += p;
	}
	for (auto p : mp)
	{
		if (p.second > sum / 2)
			ans = p.first;
	}
	cout << ans << endl;
}
