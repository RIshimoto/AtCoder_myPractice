#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, ans;
	cin >> n;
	vector<int> p(n);
	rep(i, n) cin >> p[i];
	ans = 1e9;
	rep(i, n)
	{
		int cnt = 0;
		while(p[i] % 10 == 0)
		{
			p[i] /= 10;
			cnt++;
		}
		ans = min(ans, cnt);
	}
	cout << ans << endl;
	return 0;
}
