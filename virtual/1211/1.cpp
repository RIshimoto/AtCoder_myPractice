#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k;
	cin >> n >> k;
	vector<int> sum(n + 1, 0);
	rep(i, n) cin >> sum[i + 1];
	rep(i, n) sum[i + 1] += sum[i];
	rep(i, n - 3)
	{
		if (sum[i + 3] - sum[i] < k)
		{
			cout << i + 3 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
