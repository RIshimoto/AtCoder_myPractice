#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, ans;
	int imos[100010];

	rep(i, 100010) imos[i] = 0;
	cin >> n;
	rep(i, n)
	{
		int a;
		cin >> a;
		if (a != 0)
			imos[a - 1] += 1;
		else
			imos[0] += 1;
		imos[a + 2] += -1;
	}
	rep(i, 100010) imos[i + 1] += imos[i];
	ans = 0;
	rep(i, 100010) ans = max(ans, imos[i]);
	cout << ans << endl;
	return 0;
}
