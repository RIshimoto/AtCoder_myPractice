#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	string s;
	int n;
	ll sum_o, sum_e;
	cin >> s;
	n = s.size();
	sum_o = sum_e = 0;
	rep(i, n)
	{
		int x = s[n - 1 - i] - '0';
		if (i % 2 == 0)
			sum_o += x;
		else
			sum_e += x;
	}
	ll ans = sum_o - sum_e;
	ans %= 11;
	if (ans < 0) ans += 11;
	cout << ans << endl;
	return 0;
}
