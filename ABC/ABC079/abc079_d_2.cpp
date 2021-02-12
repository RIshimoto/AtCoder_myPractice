#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int INF = 1e9;

int M[10][10];
signed main(void)
{
	int h, w;
	cin >> h >> w;
	int a[h][w];

	rep(i, 10) rep(j, 10) cin >> M[i][j];
	rep(i, h) rep(j, w) cin >> a[i][j];

	rep(k, 10) rep(i, 10) rep(j, 10)
		M[i][j] = min(M[i][j], M[i][k] + M[k][j]);
	int ans = 0;
	rep(i, h) rep(j, w)
	{
		if (a[i][j] == -1) continue;
		ans += M[a[i][j]][1];
	}
	cout << ans << endl;
	return 0;
}
