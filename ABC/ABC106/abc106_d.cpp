#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, m, q;
	int l, r;
	cin >> n >> m >> q;
	vector<vector<int>> sum(510, vector<int>(510, 0));
	rep(i, m) 
	{
		cin >> l >> r;
		sum[l][r]++;
	}
	rep(i, n) rep(j, n)
		sum[i + 1][j + 1] += sum[i][j + 1] + sum[i + 1][j] - sum[i][j];
	rep(j, q)
	{
		cin >> l >> r; // l < r
		cout << sum[r][r] - sum[l - 1][r] - sum[r][l - 1] + sum[l - 1][l - 1] << endl;
	}
	return 0;
}
