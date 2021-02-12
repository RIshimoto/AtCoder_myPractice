#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	int n;
	ll ans;
	cin >> n;
	vector<int> vec(n);
	ans = 0;
	rep(i, n)  cin >> vec[i];
	sort(vec.rbegin(), vec.rend());
	rep(i, n / 2) ans += 2 * vec[i];
	ans -= vec[0];
	if (n % 2 != 0)
		ans += vec[n / 2];
	cout << ans << endl;
	return 0;
}
