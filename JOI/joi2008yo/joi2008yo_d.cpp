#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll=long long;
using P=pair<ll, ll>;

signed main(void)
{
	int n, m;
	int x, y;
	bool ok;
	vector<P> p, q;

	cin >> m;
	p.resize(m);
	rep(i, m) cin >> p[i].first >> p[i].second; 
	cin >> n;
	q.resize(n);
	rep(i, n) cin >> q[i].first >> q[i].second; 
	rep(i, n)
	{
		x = q[i].first - p[0].first;
		y = q[i].second - p[0].second;
		ok = true;
		rep (j, m)
		{
			if (find(q.begin(), q.end(), P(p[j].first + x, p[j].second + y)) == q.end())
				ok = false;
		}
		if (ok)
			cout << x << " " << y << endl;
	}
	return 0;
}
