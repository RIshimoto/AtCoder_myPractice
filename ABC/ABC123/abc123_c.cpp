#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	vector<long long> a(5);
	long long n, ans;

	cin >> n;
	rep(i, 5) cin >> a[i];
	sort(a.begin(), a.end());
	ans = (n / a[0] + 1) + 4;
	if (n % a[0] == 0) ans--;
	cout << ans << endl;
	return 0;
}
