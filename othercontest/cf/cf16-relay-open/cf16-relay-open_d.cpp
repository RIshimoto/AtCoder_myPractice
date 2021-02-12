#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, c, sum;
	int ans[3][3];
	bool ok;

	cin >> a >> b >> c;
	ans[0][0] = a;
	ans[0][1] = b;
	ans[1][1] = c;
	ans[2][0] = ans[0][0] + ans[0][1] - ans[1][1];
	ans[1][2] = ans[0][0] + ans[2][0] - ans[1][1];
	ans[0][2] = ans[0][0] + ans[1][1] - ans[1][2];
	ans[1][0] = ans[0][1] + ans[0][2] - ans[2][0];
	ans[2][1] = ans[0][0] + ans[1][1] - ans[2][0];
	ans[2][2] = ans[0][1] + ans[1][1] - ans[2][0];
	rep(i, 3) 
	{
		rep(j, 3)
			cout << ans[i][j] << " ";
		cout << endl;
	}
	return 0;
}
