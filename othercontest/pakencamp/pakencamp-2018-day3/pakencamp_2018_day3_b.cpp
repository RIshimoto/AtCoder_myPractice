#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, cnt;
	cin >> n;
	int a[n];
	rep(i, n) cin >> a[i];
	rep(i, n - 1) a[i + 1] += a[i];
	cnt = 0;
	rep(i, n)
	{
		if (a[i] <= 2018)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
