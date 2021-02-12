#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n;
	ll ans;
	cin >> n;
	ans = 0;
	rep(i, n)
	{
		int a, b;
		cin >> a >> b;
		ans += min(a / 2, b);
	}
	cout << ans << endl;
	return 0;
}
