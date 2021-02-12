#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, d, x, cnt;
	cin >> n >> d >> x;
	cnt = x;
	rep(i, n)
	{
		int a;
		cin >> a;
		cnt += d / a;
		if (d % a != 0) cnt++;
	}
	cout << cnt << endl;
	return 0;
}
