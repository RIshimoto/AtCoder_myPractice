#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, d;
	cin >> n >> d;
	vector<int> vec(n);
	rep(i, n) cin >> vec[i];
	sort(vec.rbegin(), vec.rend());
	int ans = 0;
	if (d <= n)
	{
		for(int i = d - 1; i < n; i += d)
		{
			ans += vec[i];
		}
	}
	cout << ans << endl;
	return 0;
}
