#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m; 
	vector<int> v[100001];
	int p[100000], y[100000];

	cin >> n >> m;
	rep(i, m)
	{
		cin >> p[i] >> y[i];
		p[i]--;
		v[p[i]].push_back(y[i]);
	}
	rep(i, n) sort(v[i].begin(), v[i].end());
	rep(i, m)
	{
		printf("%06d%06d\n",p[i]+1, lower_bound(v[p[i]].begin(), v[p[i]].end(), y[i]) - v[p[i]].begin() + 1);
	}
	cout << endl;
	return 0;
}
