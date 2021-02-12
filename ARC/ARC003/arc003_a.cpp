#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, sum;
	double ans;
	string s;
	map<char, int> mp;

	cin >> n >> s;
	rep(i, n)
	{
		mp[s[i]]++;
	}
	sum = 0;
	for(auto p : mp)
	{
		auto k = p.first;
		auto v = p.second;
		if (k == 'F') continue;
		sum += ('E' - k) * v;
	}
	ans = (double) sum / n;
	cout << fixed << setprecision(20) << ans << endl;
	return 0;
}
