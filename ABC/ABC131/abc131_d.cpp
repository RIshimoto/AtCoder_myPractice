#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, n) FOR(i, 0, n)
using namespace std;

signed main(void)
{
	int n;
	vector<pair<int, int>> tasks;
	int now = 0;

	cin >> n;
	tasks.resize(n);
	rep(i, n)
	{
		int a, b;
		cin >> a >> b;
		tasks.emplace_back(b, a);
	}
	sort(tasks.begin(), tasks.end());
	for(auto v : tasks)
	{
		now += v.second;
		if (v.first < now)
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
