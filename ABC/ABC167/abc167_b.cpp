#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, c, k;
	int ans = 0;
	cin >> a >> b >> c >> k;
	if (k < a)
		ans += k;
	else
	{
		ans += a;
		k -= a;
		if (k > b)
			ans -= (k - b);
	}
	cout << ans << endl;
	return 0;
}
