#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int h, w;
	cin >> h >> w;
	int c[10][10];
	rep(i, 10)rep(j, 10)
		cin >> c[i][j];
	rep(k, 10) rep(i, 10) rep(j, 10)
		c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
	int ans = 0;
	rep(i, h) rep(j, w) 
	{
		int a;
		cin >> a;
		if (a == -1) continue;
		ans += c[a][1];
	}
	cout << ans << endl;
	return 0;
}
