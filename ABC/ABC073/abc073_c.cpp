#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n, ans;
	cin >> n;
	map<int, int> m;
	for(int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		m[a]++;
	}
	ans = 0;
	for(auto p : m)
	{
		auto v = p.second;
		if (v % 2 != 0)
			ans += 1;
	}
	cout << ans << endl;
	return 0;
}
