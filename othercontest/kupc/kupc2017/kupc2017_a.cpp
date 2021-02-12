#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k, cnt;
	cin >> n >> k;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	sort(a.rbegin(), a.rend());
	cnt = 0;
	rep(i, n)
	{
		k -= a[i];
		cnt++;
		if (k <= 0)
		{
			cout << cnt << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
