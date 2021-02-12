#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, ans;
	vector<int> a(3);
	cin >> n >> a[0] >> a[1] >> a[2];
	sort(a.rbegin(), a.rend());
	ans = n / (a[0] + a[1] + a[2]) * 3;
	n %= (a[0] + a[1] + a[2]); 
	if (n != 0)
	{
		ans++;
		n -= a[0];
		if (n > 0)
			ans++;
		n -= a[1];
		if (n > 0)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
