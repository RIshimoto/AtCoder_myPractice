#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int a, r, n;
	cin >> a >> r >> n;
	ll ans = a;
	rep(i, n - 1)
	{
		if ((ll)ans * r > 1e9)
		{
			cout << "large" << endl;
			return 0;
		}
		ans *= r;
	}
	cout << ans << endl;
	return 0;
}
