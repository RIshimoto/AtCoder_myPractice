#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<int, int>;
#define N 1000
#define W 0
#define B 1 
#define R 2

const int INF = 1e9;
int color[3][N];
int dp[3][N];
signed main(void)
{
	int n;
	string s[5];
	
	cin >> n;
	rep(i, 5) cin >> s[i];
	rep(j, 5)
	{
		rep(i, n)
		{
			switch(s[j][i]){
				case 'W':
					color[W][i + 1]++;
					break;
				case 'B':
					color[B][i + 1]++;
					break;
				case 'R':
					color[R][i + 1]++;
					break;
			}
		}
	}
	rep(i, 3) rep(j, N) dp[i][j] = INF;
	rep(i, 3) dp[i][0] = 0;
	for (int r = 1; r <= n; r++)
	{
		for (int i = W; i <= R; i++)
		{
			for (int j = W; j <= R; j++)
			{
				if (i == j) continue;
				dp[j][r] = min(dp[j][r], dp[i][r - 1] + (5 - color[j][r]));
				//cout << dp[r - 1][i] << " ";
			}
		}
	}
	int ans = INF;
	for (int r = 0; r < 3; r++)
		ans = min(ans, dp[r][n]);
	cout << ans << endl;
	return 0;
}
