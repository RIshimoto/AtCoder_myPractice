#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define MAX 100
using namespace std;
using P = pair<int, int>;
typedef long long ll;

int n;
int mp[MAX][MAX];
vector<vector<int>> dp(MAX, vector<int>(MAX, -1));

ll dfs(int x, int y)
{
	if (dp[x][y] != -1) return dp[x][y];
	return dp[x][y] = max(dfs(x + 1, y), dfs(x + 1, y + 1)) + mp[x][y];
}

signed main(void)
{
	cin >> n;
	rep(i, n) 
	{
		rep(j, i + 1)
		{
			cin >> mp[i][j];
			if (n - 1 == i)
				dp[i][j] = mp[i][j];
		}
	}
	dfs(0, 0);
	cout << dp[0][0] << endl;
	return 0;
}
