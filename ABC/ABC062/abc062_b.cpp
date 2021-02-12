#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int h, w;
	cin >> h >> w;
	char a[h][w];
	rep(i, h) rep(j, w) cin >> a[i][j];
	rep(i, w + 2) cout << '#';
	cout << endl;
	rep(i, h)
	{
		cout << '#';
		rep(j, w)
		{
			cout << a[i][j];
		}
		cout << '#' << endl;
	}
	rep(i, w + 2) cout << '#';
	cout << endl;
	return 0;
}
