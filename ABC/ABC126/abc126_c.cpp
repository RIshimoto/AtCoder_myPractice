#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k, score, sum;
	double ans;

	cin >> n >> k;
	ans = 0;
	rep(i, n)
	{
		score = i + 1;
		sum = n;
		while(1 <= score && score <= k - 1)
		{
			score *= 2;
			sum *= 2;
		}
		ans += (double)1 / sum;
	}
	cout << fixed << setprecision(10) << ans << endl;
	return 0;
}
