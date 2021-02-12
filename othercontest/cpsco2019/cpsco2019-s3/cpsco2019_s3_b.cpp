#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	sort(a.rbegin(), a.rend());
	rep(i, n)
	{
		m -= a[i];
		if (m <= 0)
		{
			cout << i + 1 << endl;
			return 0;
		}
	}
	return 0;
}
