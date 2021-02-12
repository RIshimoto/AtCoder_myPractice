#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n);  i++)
using namespace std;
typedef long long ll;
using P = pair<int, int>;

signed main(void)
{
	ll n, k, sum;
	cin >> n >> k;
	vector<ll> p(n);
	rep(i, n) cin >> p[i];
	sort(p.begin(), p.end());
	sum = 0;
	rep(i, k) sum += p[i];
	cout << sum << endl;
	return 0;
}
