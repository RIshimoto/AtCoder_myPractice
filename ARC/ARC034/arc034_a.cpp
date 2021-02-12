#include <bits/stdc++.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	double ans;
	ans = 0;
	rep(i, n)
	{
		double sum = 0;
		rep(j, 5)
		{
			double a;
			cin >> a;
			if (j == 4) a *= (double)110 / 900;
			sum += a;
		}
		ans = max(ans, sum);
	}
	cout << fixed << setprecision(20) << ans << endl;
	return 0;
}
