#include <bits/stdc++.h>
#define rep(i, n) for(int i= 0; i < (n); i++)
using namespace std;

int keta(int k)
{
	int cnt;

	cnt = 0;
	while (k)
	{
		k /= 10;
		cnt++;
	}
	return (cnt);
}

signed main(void)
{
	int m, r;
	int cnt, ans;

	cin >> m >> r;
	ans = keta(r);
	cnt = 0;
	int now = 0;
	while ()
	{
		if (now == 0)
		{
			now = 1;
		}
	}
	return 0;
}
