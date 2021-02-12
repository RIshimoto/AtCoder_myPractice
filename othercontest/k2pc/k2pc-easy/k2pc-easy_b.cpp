#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, cnt, x;
	vector<int> f(10), sum(7);
	cin >> n;
	string c[n];
	rep(i, 10) cin >> f[i];
	rep(i, n) cin >> c[i];
	sort(f.rbegin(), f.rend());
	rep(j, 7)
	{
		x = cnt = 0;
		rep(i, n)
		{
			if (c[i][j] == 'X')
				x++;
			else
				x = 0;
			cnt = max(cnt, x);	
		}
		sum[j] = cnt;
	}
	sort(sum.rbegin(), sum.rend());
	rep(i, 7)
	{
		if (sum[i] > f[i])
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
