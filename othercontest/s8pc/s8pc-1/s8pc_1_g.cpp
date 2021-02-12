#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MAXN = 16;

int n;
int start;
int sum;
int dist[MAXN][MAXN];
int t[MAXN][MAXN];
int dp[1 << MAXN][MAXN];

// 再帰バージョン
// ・bit ＝（巡回済みの点のビットフラグ）
// ・dp[bit][now] ＝（現在点のnowで巡回済みがbitの時の最小コスト）
int rec(int bit, int now)
{ 
	//計算済みならそのまま
	if (dp[bit][now] >= 0)
		return dp[bit][now];
	if (bit == (1 << n) - (1 << start) - 1) 
	{
		if (sum + dist[now][start] > t[now][start])
			return INF;
		return dp[bit][now] = dist[now][start]; 
	}
	int res = INF;
	rep(k, n)
	{
		// k番目のビット(１からn-１において)が立っていなければ
		// そこにビットを立てて再帰
		if (!(bit & (1 << k)) && k != start)
		{
			if (sum + dist[now][k] < t[now][k])
			{
				sum += dist[now][k];
				res = min(res, rec(bit | 1 << k, k) + dist[now][k]);
				sum -= dist[now][k];
			}
		}

	}
	return dp[bit][now] = res;
}

signed main(void)
{
	int m;
	int ans;
	int v, u, d, b; 

	cin >> n >> m;
	rep(i, n) rep(j, n)
	{
		dist[i][j] = INF;
		t[i][j] = INF;
	}
	rep(i, m) {
		cin >> v >> u >> d >> b; 
		v--; u--;
		dist[v][u] = d;
		dist[u][v] = d;
		t[v][u] = b;
		t[u][v] = b;
	}
	fill((int *)dp, (int *)(dp + (1 << MAXN)), -1);

	ans =  INF;
	cout << rec(0, 0) << endl;

	return 0;
}
