#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n, k;
	long long ans;
	cin >> n >> k;
	
	ans = 1;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			ans *= k;
		else
			ans *= k - 1;
	}
	cout << ans << endl;
	return 0;
}
