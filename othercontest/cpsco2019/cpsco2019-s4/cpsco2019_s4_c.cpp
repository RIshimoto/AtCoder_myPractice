#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, d, j;
	ll cnt;

	cin >> n >> d;
	vector<int> r(n);
	rep(i, n) cin >> r[i];
	sort(r.begin(), r.end());
	cnt = 0;
	rep(i, n)
	{
		while (j < n && r[j] - r[i] <= d) j++;
		cnt += (ll)(j - i - 1) * (ll)(j - i - 2) / 2;
	}
	cout << cnt << endl;
	return 0;
}
