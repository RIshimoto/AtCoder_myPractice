#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, s, t, cnt;
	cin >> n >> s >> t;
	cnt = 0;
	rep(i, n)
	{
		if (t == s)
		{
			cout << cnt << endl;
			return 0;
		}
		t /= 2;
		cnt++;
	}
	cout << -1 << endl;
	return 0;
}
