#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, a, b;
	int ans;
	cin >> n >> a >> b;

	ans = 0;
	rep (i, n)
	{
		string s;
		int d;
		cin >> s >> d;
		if (d < a) d = a;
		if (d > b) d = b;
		if (s == "West") d *= -1;
		ans += d;
	}
	if (ans == 0)
		cout << "0" << endl;
	else if (ans > 0)
		cout << "East " << ans << endl;
	else if (ans < 0)
	{
		ans *= -1;
		cout << "West " << ans << endl;
	}
	return 0;
}
