#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int h, w, cnt;
	int c[10][10];

	cin >> h >> w;
	rep(i, 10) rep(j, 10) cin >> c[i][j];
	cnt = 0;
	rep(k, 10) rep(i, 10) rep(j, 10)
		c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
	rep(i, h) rep(j, w)
	{
		int a;
		cin >> a;
		if (a >= 0) cnt += c[a][1];
	}
	cout << cnt << endl;
	return 0;
}
