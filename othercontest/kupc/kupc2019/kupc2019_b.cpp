#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<int, int>;

const int MAX_N = 110;
const int MAX_W = 10010;

vector<bool> visit(MAX_N, false);
vector<int> graph[MAX_N];
vector<P> carry(MAX_N);
ll dp[MAX_N][MAX_W];
P dfs(int v, int p = -1)
{
	visit[v] = true;
	P cnt = carry[v]; 
	rep(i, graph[v].size())
	{
		if (graph[v][i] == p || visit[graph[v][i]]) continue;
		P c = dfs(graph[v][i], v);
		cnt.first += c.first;
		cnt.second += c.second;
	}
	return cnt;
}

signed main(void)
{
	int n, m, W;
	cin >> n >> m >> W;
	for(int i = 1; i <= n; i++)
		cin >> carry[i].first >> carry[i].second;
	rep(i, m) 
	{	
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	rep(i, MAX_N) rep(j, MAX_W) dp[i][j] = 0;
	vector<P> vec;
	for(int i = 1; i <= n; i++)
	{
		if (visit[i]) continue;
		vec.push_back(dfs(i));
	}
	// for(int i = 0; i < n; i++)
	// ‰×•¨‚Ì“ñd‘I‘ð‚ª‚ ‚è“¾‚éB
	for(int i = 0; i < vec.size(); i++)
	{
		for(int j = 1; j <= W; j++)
		{
			if (j - vec[i].first >= 0)
			{
				dp[i + 1][j] = max(dp[i + 1][j], dp[i][j - vec[i].first] + vec[i].second);
			}
			dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
		}
	}
	cout << dp[vec.size()][W] << endl;
	return 0;
}
