#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	long long cnt;
	map<long long, long long> mp, sp;

	cin >> n;
	rep(i, n)
	{
		int v;
		cin >> v;
		mp[(i + 1) + v]++;
		sp[(i + 1) - v]++;
	}
	cnt = 0;
	for(auto m : mp)
	{
		auto k = m.first;
		auto v = m.second;
		if (sp[k] > 0)
			cnt += v * sp[k];
	}
	cout << cnt <<  endl;
	return 0;
}
