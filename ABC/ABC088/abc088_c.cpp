#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int c[3][3];
	int a0, a1, a2, b0, b1, b2;
	bool ok;

	rep(i, 3) rep(j, 3) cin >> c[i][j];
	ok = true;
	rep(i, c[0][0])
	{
		a0 = i;
		b0 = c[0][0] - i;
		b1 = c[0][1] - i;
		b2 = c[0][2] - i;
		a1 = c[1][0] - b0;
		a2 = c[2][0] - b0;
		if (a1 + b1 != c[1][1])
			ok = false;
		if (a1 + b2 != c[1][2])
			ok = false;
		if (a2 + b1 != c[2][1])
			ok = false;
		if (a2 + b2 != c[2][2])
			ok = false;
		if (ok)
			break;
	}
	if (ok)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
