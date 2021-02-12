#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m;
	int ans;
	cin >> n >> m;
	ans = 0;
	rep(i, n)
	{
		int cnt = 0; 
		rep(i, m)
		{
			int a;
			cin >> a;
			if (a == 1)
				cnt++;
		}
		ans = max(ans, cnt);
	}
	cout << ans << endl;
	return 0;
}
