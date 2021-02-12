#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k, ans, mx;
	cin >> n >> k;
	int a[n];
	ans = -1;
	mx = 0;
	rep(i, n) 
	{
		cin >> a[i];
		if (a[i] < k && mx < a[i])
		{
			mx = a[i];
			ans = i + 1;
		}
	}
	cout << ans << endl;
	return 0;
}
