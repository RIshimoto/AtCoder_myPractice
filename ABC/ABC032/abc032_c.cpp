#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, k, r, ans, tmp;
	cin >> n >> k;
	long long p[n];
	bool flag[n];

	rep(i, n) 
	{
		cin >> p[i];
		if (p[i] == 0)
		{
			cout << n << endl;
			return 0;
		}
	}
	rep(i, n) flag[i] = 0;
	ans = 0;
	r = 0;
	tmp = 1;
	rep(l, n)
	{	
		while (tmp * p[r] <= k && r < n)
	 	{
			tmp *= p[r];
			flag[r] = true;	
			r++;
		}
		if (flag[l]) tmp /= p[l];
		ans = max(ans, r - l);
		if(l == r) r++;
	}
	cout << ans << endl;
	return 0;
}
