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
		int t, d, m;
		cin >> t >> d >> m;
		if (t + 10 <= d)
			cnt += m;
	}
	cout << cnt << endl;
	return 0;
}
