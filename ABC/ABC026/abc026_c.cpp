#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, max_p, min_p;
	cin >> n;
	vector<int> v[n], p(n);
	for (int i = 1; i < n; i++)
	{
		int b;
		cin >> b;
		b--;
		v[b].push_back(i);
	}
	for(int i = n - 1; i >= 0; i--)
	{
		if (v[i].size() == 0)
		{
			p[i] = 1;
			continue;
		}
		max_p = 0;
		min_p = (int)1e9;
		for(int j = 0; j < v[i].size(); j++)
		{
			max_p = max(p[v[i][j]], max_p);
			min_p = min(p[v[i][j]], min_p);
		}
		p[i] = max_p + min_p + 1;
	}
	cout << p[0] << endl;
	return 0;
}
