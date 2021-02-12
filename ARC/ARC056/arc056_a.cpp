#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int a, b, k, l;
	long long ans;
	cin >> a >> b >> k >> l;
	ans = min((ll)k / l * b + k % l * a, (ll)k * a); 
	if (k % l != 0)
		ans = min(ans, (ll)(k / l + 1) * b);
	cout << ans << endl;
	return 0;
}
