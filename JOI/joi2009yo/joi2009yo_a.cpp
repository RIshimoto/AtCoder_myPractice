#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	rep(i, 3)
	{
		int h[2], m[2], s[2];
		int ans_h, ans_m, ans_s;
		rep(i, 2)
			cin >> h[i] >> m[i] >> s[i];
		ans_h = h[1] - h[0];
		ans_m = m[1] - m[0];
		ans_s = s[1] - s[0];
		if (ans_s < 0)
		{
			ans_m--;
			ans_s += 60;
		}
		if (ans_m < 0)
		{
			ans_h--;
			ans_m += 60;
		}
		cout << ans_h << " " << ans_m << " " << ans_s << endl;
	}
	return 0;
}
