#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, x, cnt;
	cin >> n >> x;
	vector<long long> a(n);

	cnt = 0;
	rep(i, n) cin >> a[i];
	sort(a.begin(), a.end());
	cout << a[0] << endl;
	rep(i, n)
	{
		x -= a[i];
		cout << x << endl;
		if (x >= 0)
			cnt++;
		else
			break;
	}
	if (x > 0) cnt--;
	cout << cnt << endl;
	return 0;
}
