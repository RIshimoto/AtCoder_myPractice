#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, m;
	ll tmp, ans, t, now;
	cin >>  n >> m >> t;
	int a[m], b[m];
	rep(i, m) cin >> a[i] >> b[i];
	rep(i, m) {a[i] *= 2; b[i] *= 2;}

	t *= 2;
	ans = n;
	now = 0;
	rep(i, m)
	{
		tmp = (a[i] - now) / 2;
		if ((a[i] - now) % 2 != 0)
			tmp++;
		ans -= tmp; 
		if (ans <= 0)
		{
			cout  << "No" << endl;
			return 0;
		}
		ans = min((ll)n, ans + (b[i] - a[i]) / 2);
		now = b[i];
	}
	tmp = (t - now) / 2;
	if ((t - now) % 2 != 0)
		tmp++;
	ans -= tmp;
	if (ans > 0)
		cout  << "Yes" << endl;
	else
		cout  << "No" << endl;
	return 0;
}
