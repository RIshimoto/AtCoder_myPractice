#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int l[3], r[3];
	ll m, cnt;
	double ans;

	m = 1;
	rep(i, 3) 
	{
		cin >> l[i] >> r[i];
		m *= r[i] - l[i] + 1;
	}
	cnt = 0;
	for(int A = l[0]; A <= r[0]; A++)
	{
		if (A > r[1] || A > r[2]) continue;

		ll tmp_l, tmp_r;
		tmp_l = r[1] - A; 
		tmp_r = r[2] - A;
		if (A < l[1])
			tmp_l =  r[1] - l[1] + 1;
		if (A < l[2])
			tmp_r = r[2] - l[2] + 1;
		cnt += tmp_l * tmp_r;
	}
	ans = (double) cnt / m;
	cout << fixed << setprecision(20) << ans << endl;
	return 0;
}
