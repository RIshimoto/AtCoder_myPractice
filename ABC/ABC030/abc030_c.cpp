#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, x, y, now, cnt, i, j;
	cin >> n >> m >> x >> y;
	int a[n], b[m];
	bool flag_a, flag_b;
	rep(i, n) cin >> a[i];
	rep(i, m) cin >> b[i];
	flag_a = true;
	flag_b = false;
	i = j = now = cnt = 0;
	while(true)
	{
		while (flag_a && i < n)
		{
			if (a[i] >= now)
			{
				now = a[i] + x;
				flag_a = false;
				flag_b = true;
				i++;
				break;
			}
			else i++;
		}
		while (flag_b && j < m)
		{
			if (b[j] >= now)
			{
				cnt++;
				now = b[j] + y;
				flag_b = false;
				flag_a = true;
				j++;
				break;
			}
			else j++;
		}
		if (i >= n || j >= m)
			break;
	}
	cout << cnt << endl;
	return 0;
}
