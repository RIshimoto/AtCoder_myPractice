#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<int, int>;

signed main(void)
{
	ll a, b, c, d;
	ll ans;
	cin >> a >> b >> c >> d;
	ans = a * c;
	ans = max(ans, a * d);
	ans = max(ans, b * c);
	ans = max(ans, b * d);
	cout << ans << endl;
	return 0;
}
