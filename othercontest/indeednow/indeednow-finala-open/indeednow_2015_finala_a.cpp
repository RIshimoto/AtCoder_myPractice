#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, ans;
	cin >> n;
	vector<int> a(n), sum;
	rep(i, n) cin >> a[i];
	sort(a.begin(), a.end());
	rep(i, n / 2)
	{
		sum.push_back(a[n - 1 - i] + a[i]);
	}
	sort(sum.begin(), sum.end());
	ans = sum[sum.size() - 1]  - sum[0];
	cout << ans << endl;
	return 0;
}
