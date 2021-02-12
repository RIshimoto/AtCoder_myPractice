#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, x, l;
	int now, cnt;
	cin >> n >> x;

	now  = 0;
	cnt = 1;
	rep(i, n)
	{
		cin >> l;
		now += l;
		if (now <= x)
			cnt++;
	}
	cout << cnt << endl;
}
