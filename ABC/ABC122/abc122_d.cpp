#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int const mod = 1e9 + 7;
int dp[101][4][4][4];
signed main(void)
{
	int n;
	cin >> n;
	dp[0][3][3][3] = 1;
	rep(len, n)
	{
		// ÅŒã‚©‚ç1•¶š–Ú‚Ì•¶š
		rep(c1, 4)
		{
			// ÅŒã‚©‚ç2•¶š–Ú‚Ì•¶š
			rep(c2, 4)
			{
				// ÅŒã‚©‚ç3•¶š–Ú‚Ì•¶š
				rep(c3, 4)
				{
					 if (dp[len][c1][c2][c3] == 0) continue;
					 rep(a, 4)
					 {
						 if (a == 2 && c1 == 1 && c2 == 0) continue;
						 if (a == 2 && c1 == 0 && c2 == 1) continue;
						 if (a == 1 && c1 == 2 && c2 == 0) continue;
						 if (a == 2 && c1 == 1 && c3 == 0) continue;
						 if (a == 2 && c2 == 1 && c3 == 0) continue;

						 // S = ...c3 c2 c1
						 // nextS = ...c2 c1 a
						 dp[len + 1][a][c1][c2] += dp[len][c1][c2][c3];
						 dp[len + 1][a][c1][c2] %= mod;
					 }
				}
			}
		}
	}
	int ans = 0;
	rep(c1, 4)
	{
		rep(c2, 4)
		{
			rep(c3, 4)
			{
				ans += dp[n][c1][c2][c3];
				ans %= mod;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
