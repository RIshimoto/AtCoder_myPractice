#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

const int INF = 1e9;
signed main(void)
{
	int n, m;
	cin >> n >> m;
	int M[n][n];
	int ans, mx;
	rep(i, n) rep(j, n) M[i][j] = INF;
	rep(i, n) M[i][i] = 0;
	rep(i, m) 
	{
		int a, b, c;
		cin >> a >> b >> c;
		a--; b--;
		M[a][b] = c;
		M[b][a] = c;
	}
	rep(k, n) rep(i, n) rep(j, n)
	{
		if (M[i][k] == INF || M[k][j] == INF) continue;
		M[i][j] = min(M[i][j], M[i][k] + M[k][j]);
	}
	ans = INF;
	rep(i, n)
	{
		mx = 0;
		rep(j, n) mx = max(mx, M[i][j]);
		ans = min(ans, mx);
	}
	cout << ans << endl;
	return 0;
}
