#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using P = pair<int, int>;
typedef long long ll;

signed main(void)
{
	ll n, m, sum;
	cin >> n >> m;
	ll c[n];
	vector<ll> f;

	rep(i, n) cin >> c[i];
	f.push_back(m);
	sum = 0;
	rep(i, n)
	{
		if (c[i] >= f[f.size() - 1])
		{
			sum += abs(c[i] - f[f.size() - 1]);
			f.insert(f.end(), c[i]);
		}
		else if (c[i] <= f[0])
		{
			sum += abs(c[i] - f[0]);
			f.insert(f.begin(), c[i]);
		}
		else
		{
			auto l = lower_bound(ALL(f), c[i]);
			f.insert(l, c[i]);
			int index = l - f.begin();
			sum += min((f[index] - c[i]), abs(f[index + 1] - c[i]));
		}
	}
	cout << sum << endl;
	return 0;
}
