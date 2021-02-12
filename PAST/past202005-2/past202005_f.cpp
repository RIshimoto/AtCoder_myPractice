#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n;
	cin >> n;
	string s[n];
	vector<char> vec, ans(n);
	map<char, int> mp;
	char omake;

	rep(i, n)
	{
		cin >> s[i];
		rep(j, s[i].size()) mp[s[i][j]]++;
	}
	omake = 0;
	for(auto p : mp)
	{
		auto k = p.first;
		auto v = p.second;
		rep(i, v / 2) vec.push_back(k);
		if (v % 2 != 0)
			omake = k;
	}
	if (n % 2 == 0)
	{
		if (vec.size() >= n / 2)
		{
			rep(i, n / 2)
				ans[i] = ans[n - 1 - i] = vec[i];
			rep(i, n) cout << ans[i];
			return 0;
		}
	}
	else if (n % 2 != 0)
	{
		if (vec.size() * 2 >= n - 1)
		{
			rep(i, n / 2)
				ans[i] = ans[n - 1 - i] = vec[i];
		}
		if (vec.size() > n / 2) 
			ans[n / 2] = vec[n / 2];
		else if (omake)
			ans[n / 2] = omake;
		rep(i, n) cout << ans[i];
		cout << '\n';
		return 0;
	}
	cout << -1 << endl;
	return 0;
}
