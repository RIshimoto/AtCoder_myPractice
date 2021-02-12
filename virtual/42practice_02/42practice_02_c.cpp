#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n;
	int a, b;
	ll cnt, ans;
	cin >> n;
	ans = 0;
	for (a = 1; a < n; a++)
	{
		cnt = 0;
		for (b = 1; b * b < a; b++)
		{
			if (a % b == 0)
				cnt++;
		}
		ans += cnt * 2;
		if (b * b == a)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
