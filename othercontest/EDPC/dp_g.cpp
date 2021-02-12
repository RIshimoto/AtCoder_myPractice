#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
#define MAX 100100

int N, M;
vector<int> deg[MAX];
int dp[MAX];
int DP(int now)
{
	if (dp[now] != -1) return (dp[now]);
	int fans = 0; 
	for (auto to : deg[now])
		fans = max(fans, DP(to) + 1);
	return (dp[now] = fans);
}

int main(void)
{
	int ans;

	cin >> N >> M;
	rep(i, M) 
	{
		int a, b;
		cin >> a >> b;
		deg[a].push_back(b);
	}
	memset(dp, -1, sizeof(dp));
	for (int i = 1; i <= N; i++) DP(i);
	ans = 0;
	for (int i = 1; i <= N; i++)
		ans = max(ans, dp[i]);
	cout << ans << endl;
	return 0;
}
