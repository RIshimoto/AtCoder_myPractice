#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MAXN = 16;

int n;
int d[MAXN][MAXN];
int dp[1 << MAXN][MAXN];

int rec(int bit, int now)
{ 
	if (dp[bit][now] >= 0) return dp[bit][now];	
	if (bit == (1 << n) - 1 && now == 0) return dp[bit][now] = 0; 
	int tmp = INF;
	rep(u, n)
	{
		if (!(bit >> u & 1))
			tmp = min(tmp, rec(bit | 1 << u, u) + d[now][u]);
	}
	return dp[bit][now] = tmp;
}

signed main(void)
{
	int m;
	int ans;

	cin >> n >> m;
	rep(i, n) rep(j, n) d[i][j] = d[j][i] = INF;
	rep(i, m) {int a, b; cin >> a >> b; d[a][b] = 0;}
	fill((int *)dp, (int *)(dp + (1 << MAXN)), -1);
	ans = rec(0, 0);
	cout << ((ans == INF) ? -1 : ans) << endl;
	return 0;
}

