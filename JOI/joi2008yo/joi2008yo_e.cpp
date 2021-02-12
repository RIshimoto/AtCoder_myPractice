#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int r, c;
	int ans;
	cin >> r >> c;
	vector<vector<int>>	a(r, vector<int>(c, 0));
	vector<vector<int>>	r_sum(c, vector<int> (2, 0)), tmp;

	rep(i, r) rep(j, c) cin >> a[i][j];
	rep(j, c) rep(i, r) r_sum[j][a[i][j]]++;
	ans = 0;
	for (int bit = 1; bit < (1 << r); bit++)
	{
		vector<int> v;
		for (int i = 0; i < r; i++)
		{
			if (bit & (1 << i))
				v.push_back(i);
		}
		tmp = r_sum;
		for (int i = 0; i < v.size(); i++) rep(j, c) 
		{
			if (a[v[i]][j] == 1)
			{
				tmp[j][1]--;
				tmp[j][0]++;
			}
			else
			{
				tmp[j][0]--;
				tmp[j][1]++;
			}
		}
		int sum = 0;
		rep(j, c) sum += max(tmp[j][0], tmp[j][1]);
		ans = max(sum, ans);
	}
	cout << ans << endl;
	return 0;
}
