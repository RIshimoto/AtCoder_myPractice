#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, cnt;
	cin >> n;
	cnt = 0;
	rep(i, n)
	{
		int s, a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		s = a + b + c + d + e;
		if (0 <= s && s < 20)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
