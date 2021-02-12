#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k, ans;
	vector<int> a(3), ctoi(256);
	string t;

	cin >> n >> k;
	rep(i, 3) cin >> a[i];
	cin >> t;
	ctoi['r'] = 0;
	ctoi['s'] = 1;
	ctoi['p'] = 2;
	ans = 0;
	rep(i, k)
	{
		vector<char> vec;
		for(int j = i; j < n; j += k)
		{
			vec.push_back(t[j]);
		}
		int m = vec.size();
		vector<vector<int>> dp(m, vector<int>(3, 0));
		rep(p, m)
		{
			rep(j, 3)
			{
				rep(q, 3) 
				{
					if (p == 0)
					{
						if (j == (ctoi[vec[p]] + 2) % 3)
							dp[p][j] = a[j];
					}
					else
					{
						if (j == q) continue;
						if ((ctoi[vec[p]] + 2) % 3 == j)
							dp[p][j] = max(dp[p][j], dp[p - 1][q] + a[j]);
						dp[p][j] = max(dp[p][j], dp[p - 1][q]);
					}
				}
			}
		}
		int mx = 0;
		rep(i, 3) mx = max(mx, dp[m - 1][i]);
		ans += mx;
	}
	cout << ans << endl;
	return 0;
}
