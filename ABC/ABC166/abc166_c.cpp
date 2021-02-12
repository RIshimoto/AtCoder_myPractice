#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, cnt;
	cin >> n >> m;
	int h[n];
	vector<int> v[n];
	rep(i, n) cin >> h[i];
	rep(i, m)
	{
		int a, b;
		cin >> a >> b;
		a--; b--;
		v[a].push_back(h[b]);
		v[b].push_back(h[a]);
	}
	rep(i, n) sort(v[i].rbegin(), v[i].rend());
	cnt = 0;
	rep(i, n)
	{
		if (v[i].size() == 0 || h[i] > v[i][0])
			cnt++;
	}
	cout << cnt << endl;	
	return 0;
}
