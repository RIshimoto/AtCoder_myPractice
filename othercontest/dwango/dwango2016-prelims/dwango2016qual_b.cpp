#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, maxi;
	cin >> n;
	vector<int> ans(n, 1), v(n - 1);

	maxi = 0;
	rep(i, n - 1) 
	{
		cin >> v[i];
		maxi = max(maxi, v[i]);
	}
	rep(i, n - 1)
	{
		if (v[i] == maxi && v[i + 1] == maxi)
			ans[i + 1] = v[i];
		else if (i != n - 2 && v[i] == maxi)
			continue;
		else if (i != n - 2 && v[i] > v[i + 1])
			ans[i] = v[i];
		else
			ans[i + 1] = v[i];
	}
	rep(i, n)
		printf("%d%c", ans[i], i!=n-1?' ':'\n');
	return 0;
}
