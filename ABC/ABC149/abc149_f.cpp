#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

const int MAX = 200100;
const int mod = 1e9 + 7;
ll calc(ll a, ll b)
{
	if (b == 0) return 1;
	if (b % 2 == 0)
	{
		ll d = calc(a, b / 2);
		return (d * d) % mod;
	}
	else
		return (a * calc(a, b - 1)) % mod;
}

int n;
vector<int> memo[MAX];
vector<int> tree[MAX];
int dfs(int v, int p=-1)
{
	int sum, res;
	sum = res = 0;

	for(auto u : tree[v])
	{
		if (u == p) continue;
		res = dfs(u, v);
		memo[v].push_back(res);
		sum += res;
	}
	sum += 1;
	if (p != -1)
	memo[v].push_back(n - sum);
	return (sum);
}

signed main(void)
{
	cin >> n;

	rep(i, n - 1)
	{
		int a, b;
		cin >> a >> b;
		a--; b--;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	dfs(0);	
	ll ans = 0;
	rep(i, n)
	{
		ll sum = calc(2, n - 1) - 1;
		for (auto val : memo[i])
		{
			sum -= calc(2, val) - 1;
			if (sum < 0) sum += mod;
			sum %= mod;
		}
		ans += sum;
		ans %= mod;
	}
	cout << ans * calc(calc(2, n), mod - 2) % mod << endl;
	return 0;
}
