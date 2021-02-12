#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n;
	ll ans;
	cin >> n;
	ans = 0;
	for (int i = 1; i <= n; i *= 10)
	{
		ans += n / (i * 10) * i;
		if (n / i % 10 >= 2)
			ans += i;
		else if (n / i % 10 >= 1)
			ans += n % i + 1;
	}
	cout << ans << endl;
	return 0;
}
