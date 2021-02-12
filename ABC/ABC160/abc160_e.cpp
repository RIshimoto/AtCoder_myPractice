#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long x, y, a, b, c, ans;
	vector<long long> p, q, sum;

	ans = 0;
	cin >> x >> y >> a >> b >> c;
	p.resize(a);
	q.resize(b);
	sum.resize(x + y + c);
	rep(i, a) cin >> p[i];
	rep(i, b) cin >> q[i];
	rep(i, c) cin >> sum[i];
	sort(p.rbegin(), p.rend());
	sort(q.rbegin(), q.rend());
	rep(i, x) sum.push_back(p.at(i));
	rep(i, y) sum.push_back(q.at(i));
	sort(sum.rbegin(), sum.rend());
	rep(i, x + y) ans += sum.at(i);
	cout << ans << endl;
	return 0;
}
