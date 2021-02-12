#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	int a;
	cin >> a;
	ll ans = a + a * a + a * a * a;
	cout << ans << endl;
	return 0;
}
