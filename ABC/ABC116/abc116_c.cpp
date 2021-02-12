#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, cnt;
	cin >> n;
	int h[n];
	bool ok, flag;

	rep(i, n) cin >> h[i];
	cnt = 0;
	ok = true;
	while(ok)
	{
		flag = false;
		rep(j, n)
		{
			if (flag && h[j] == 0)
			{
				flag = false;
				cnt++;
			}
			if (h[j] > 0)
			{
				h[j]--;
				flag = true;
			}	
		}
		if (flag) cnt++;
		ok = false;
		rep(i, n)
		{
			if (h[i] > 0)
				ok = true;
		}
	}
	cout << cnt << endl;
	return 0;
}
