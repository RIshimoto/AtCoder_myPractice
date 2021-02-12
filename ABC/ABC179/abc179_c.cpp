#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

signed main(void)
{
	int n, cnt, ans;
	int i, j;
	cin >> n;
	ans = 0;
	for (i = 1; i < n; i++)
	{
		cnt = 0;
		for(j = 1; j * j < i; j++)
		{
			if (i % j == 0)
				cnt++;
		}
		ans += cnt * 2;
		if (j * j == i)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
