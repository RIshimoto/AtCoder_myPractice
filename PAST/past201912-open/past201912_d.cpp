#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	map<int, int> mp;
	int ans_1, ans_2;
	for(int i = 1; i <= n; i++) mp[i] = 0;
	ans_1 = ans_2 = 0;
	rep(i, n)
	{
		int a;
		cin >> a;
		mp[a]++;
	}
	for(auto p : mp)
	{
		auto k = p.first;
		auto v = p.second;
		if (v >= 2)
			ans_1 = k;
		if (v == 0)
			ans_2 = k;
	}
	if (ans_1 != 0 && ans_2 != 0)
		cout << ans_1 << " " << ans_2 << endl;
	else
		cout << "Correct" << endl;
	return 0;
}
