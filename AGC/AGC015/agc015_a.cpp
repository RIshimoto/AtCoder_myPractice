#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, a, b, ans;

	cin >> n >> a >> b;
	ans = (b * (n - 1) + a)  - (a * (n - 1) + b) + 1;
	if (ans < 0)
		ans = 0;
	cout << ans << endl;
	return 0;
}
