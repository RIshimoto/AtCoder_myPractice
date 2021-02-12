#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	string s;
	int n;
	ll ans, cnt;

	cin >> s;
	n = s.size();
	ans = n * 25;
	cnt = 0;
	rep(i, n / 2)
	{
		if (s[i] != s[n - 1 - i])
			cnt++;
	}
	if (!cnt)
	{
		if (n % 2 != 0) ans -= 25;
	}
	else
	{
		if (cnt <= 1) ans -= 2;
	}
	cout << ans << endl;
	return 0;
}
