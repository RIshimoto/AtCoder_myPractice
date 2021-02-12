#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	ll c, d, ans;
	ll start = 140, end = 170;
	cin >> c >> d;
	ans = 0;
	while (start < d)
	{
		ans += max(0LL, min(end, d) - max(start, c));
		start *= 2;
		end *= 2;
	}
	cout << ans << endl;
	return 0;
}
