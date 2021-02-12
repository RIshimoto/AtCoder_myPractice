#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
#define MAX_N 110
#define MAX_K 10010
#define NOT_FOUND -1

int N, K;
vector<vector<int>> v(MAX_N, vector<int>(MAX_K));
ll dp[MAX_N][MAX_K];
int binary_search(int row,int search_num)
{
	int lo;
	int hi;

	lo = 0;
	hi = K;
	while (hi - lo > 1)
	{
		ll mid = (hi + lo) / 2;
		if (v[row][mid] < search_num) 
			lo = mid;
		else if (v[row][mid] >= search_num) 
			hi = mid;
	}
	if (v[row][hi] < search_num)
		return (NOT_FOUND);
	return (hi);
}

ll ans;
int dfs(int row, int num)
{
	int index;

	index = binary_search(row + 1, num);
	if (index == NOT_FOUND)
		return (dp[row + 1][index] = 0);
	if (dp[row + 1][index] != -1)
		return (dp[row + 1][index]);
	if (row + 1 == N)
		return (K - index + 1);
	for (int i = index; i <= K; i++)
	{
		dp[row][index] += dfs(row + 1, v[row + 1][i]) % mod;
		dp[row][index] %= mod;
	}
	return (dp[row + 1][index]);
}

signed main(void)
{
	cin >> N >> K;
	memset(dp, -1, sizeof(dp));
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= K; j++)
			cin >> v[i][j];
	for (int i = 1; i <= K; ++i)
	{
		dp[1][i] = dfs(1, v[1][i]) % mod;
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= K; j++)
			cout << dp[i][j];
		cout << endl;
	}
	/*
	ll ans = 0;
	for (ll i = 1; i <= K; ++i)
		ans += dp[1][i]
	cout << ans << endl;
	*/
	return 0;
}
