#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, k, ans;
	cin >> n >> k;
	long long x[n];

	rep(i, n) cin >> x[i];
	ans = 10000000000000;
	rep(i, n)
	{
		if (i + k - 1 < n)
		{
			if (x[i + k - 1] < 0)
				ans = min(ans,abs(x[i]));
			else if (x[i] > 0)
				ans = min(ans,abs(x[i + k - 1]));
			else
				ans = min(ans, min(abs(x[i + k - 1]) + abs(x[i]) * 2\
						,abs(x[i]) + abs(x[i + k - 1]) * 2));
		}	
		else
			break;
	}
	cout << ans << endl;
	return 0;
}
