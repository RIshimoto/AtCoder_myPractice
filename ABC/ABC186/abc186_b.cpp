#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int h, w, mn;
	cin >> h >> w;
	int a[h][w];
	mn = 1e9;
	rep(i, h) rep(j, w) 
	{
		cin >> a[i][j];
		mn = min(a[i][j], mn);
	}
	ll ans = 0;
	rep(i, h) rep(j, w) 
		ans += a[i][j] - mn;
		cout << ans << endl;
	return 0;
}
