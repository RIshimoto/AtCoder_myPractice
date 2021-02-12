#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	vector<int> a(3);
	int t, ans;
	rep(i, 3) cin >> a[i];
	sort(a.rbegin(), a.rend());
	ans = 0;
	t = 2 * a[0] - a[1] - a[2];
	if (t % 2 == 0) 
		ans = t / 2;
	else
		ans = (t + 1) / 2 + 1;
	cout << ans << endl;
	return 0;
}
