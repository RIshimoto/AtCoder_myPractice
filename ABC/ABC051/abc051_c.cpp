#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int sx, sy, tx, ty;
	cin >> sx >> sy >> tx >> ty;
	rep(i, ty - sy)
		cout << 'U';
	rep(i, tx - sx)
		cout << 'R';
	rep(i, ty - sy)
		cout << 'D';
	rep(i, tx - sx + 1)
		cout << 'L';
	rep(i, ty - sy + 1)
		cout << 'U';
	rep(i, tx - sx + 1)
		cout << 'R';
	cout << 'D' << 'R';
	rep(i, ty - sy + 1)
		cout << 'D';
	rep(i, tx - sx + 1)
		cout << 'L';
	cout << 'U';
	return 0;
}
