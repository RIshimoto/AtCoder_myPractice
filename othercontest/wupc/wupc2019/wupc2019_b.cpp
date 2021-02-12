#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int f(int x)
{
	int cnt = 0;
	while (x > 5)
	{
		x *= 2;
		x %= 10;
		cnt++;
	}
	return cnt;
}

signed main(void)
{
	int h, w, tmp, ans;
	cin >> h >> w;
	int a[h][w];
	rep(i, h) rep(j, w) cin >> a[i][j];
	bool ok, flag;
	ok = true;
	flag = false;
	rep(i, h) rep(j, w)
	{
		if (a[i][j] != 0)
		{
			ok = false;
			if (a[i][j] % 5 == 0)
			{
				flag = true;
				tmp = a[i][j];
			}
		}
	}
	if (!flag)
	{
		cout << "No" << endl;
		return 0;
	}
	if (!ok)
	{
		if (min(h, w) == 1)
		{
			bool A;
			A = true;
			int mx_A, mx_B;
			mx_A = mx_B = 0;
			rep(i, h) rep(j, w)
			{
				if (tmp == a[i][j])
				{	
					A = false;
					continue;
				}
				if (A)
					mx_A = max(mx_A, a[i][j]);
				else
					mx_B = max(mx_B, a[i][j]);
			}
			ans = f(mx_A) + f(mx_B) + 1;	
		}
		else
		{
			int mx = 0;
			rep(i, h) rep(j, w) mx = max(mx, a[i][j]);
			ans = f(mx)+ 1;
		}
	}
	cout << "Yes " << ans << endl;
	return 0;
}
