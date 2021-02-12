#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k;
	cin >> n >> k;
	int t[n];
	rep(i, n) cin >> t[i];
	rep(i, n - 1) t[i + 1] += t[i];
	for(int i = 2; i < n; i++)
	{
		int sum;
		sum = t[i];
		if (i >= 3)
			sum -= t[i - 3];
		if (sum < k)
		{
			cout << i + 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
