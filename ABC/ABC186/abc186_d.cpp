#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n;
	cin >> n;
	vector<int> a(n);
	ll ans = 0;
	rep(i, n) cin >> a[i];
	sort(a.begin(), a.end());
	for (int i = n - 1; i >= 0; i--)
		ans += i * ((ll)a[i] - a[(n - i - 1)]);
	cout << ans << endl;
	return 0;
}

