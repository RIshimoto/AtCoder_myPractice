#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, cnt, mx;
	cin >> n;
	int a[n];
	rep(i, n) cin >> a[i];
	cnt = mx = 0;
	rep(i, n)
	{
		if (mx < a[i])
		{
			mx = a[i];
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
