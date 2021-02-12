#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, ans;
	cin >> n;
	int a[n];
	bool flag;

	rep(i, n) cin >> a[i];
	if (n % 2 == 1)
	{
		cout << "error" << endl;
		return 0;
	}
	else
	{
		ans = 0;
		flag = false;
		rep(i, n)
		{
			if (flag)
			{
				ans += a[i] - a[i - 1];
				flag = false;
			}
			else
			{
				flag = true;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
