#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, s, u;
	int cnt, ans;
	cin >> n;
	int h[n];

	rep(i, n) cin >> h[i];
	ans = 0;
	rep(j, n)
	{
		if ((h[j - 1] <= h[j] && h[j] >= h[j + 1]) || (j == 0 || j == n - 1))
		{
			int s_l, s_r, u_l, u_r;
			s_r = j;
			s_l = j - 1;
			while(h[s_r] > h[s_l] && s_l >= 0)
			{
				s_r = s_l;
				s_l--;
			}
			u_l = j;
			u_r = j + 1;
			while(h[u_l] > h[u_r] && u_r < n)
			{
				u_l = u_r;
				u_r++;
			}
			ans = max(ans, u_l - s_r + 1);
		}
	}
	cout << ans << endl;
	return 0;
}
