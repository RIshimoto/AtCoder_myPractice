#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, ans;
	cin >> n;
	int p[n];
	bool flag[n];

	rep(i, n) flag[i] = false;
	rep(i, n) 
	{
		cin >> p[i];
		p[i]--;
		if (p[i] == i)
			flag[i] = true;
	}
	ans = 0;
	for(int i = 0; i < n; i++)
	{
		if (flag[i])
		{
			if (i != n - 1)
			{
				swap(p[i], p[i + 1]);
				flag[i + 1] = false;
			}
			else
				swap(p[i], p[i - 1]);
			ans++;
			flag[i] = false;
		}
	}
	cout << ans << endl;
	return 0;
}
