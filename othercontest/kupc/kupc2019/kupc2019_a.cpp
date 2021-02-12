#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, x, cnt;
	cin >> n >> x;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	sort(a.begin(), a.end());
	cnt = 1;
	rep(i, n - 1)
	{
		if (a[i] + x >= a[n - 1])
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
