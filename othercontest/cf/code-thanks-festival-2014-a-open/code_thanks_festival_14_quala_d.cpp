#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

signed main(void)
{
	int n, q;
	cin >> n >> q;
	rep(i, q)
	{
		int a, b, s, t, ans;
		cin >> a >> b >> s >> t;
		if (b < s || a > t) 
			ans = t - s; 
		else
			ans = max(0,(a - s)) + max((t - b), 0);
		ans *= 100;
		cout << ans << endl;
	}
	return 0;
}
