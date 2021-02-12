#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int n;
int st[11];
int a[11][11];
ll ans = -100000000000000000;

ll judge(void)
{
	vector<int> vec[3];
	ll sum = 0;

	rep(i, n) vec[st[i]].push_back(i);
	rep(k, 3)
	{
		int m = vec[k].size();
		rep(i, m - 1)
		{
			for(int j = i + 1; j < m; j++)
				sum += a[vec[k][i]][vec[k][j]];
		}
	}
	return sum;
}

void dfs(int i)
{
	rep(j, 3)
	{
		st[i] = j;
		if (i == n - 1)
			ans = max(ans, judge());
		else
			dfs(i + 1);
	}
}

signed main(void)
{
	cin >> n;
	rep(i, n - 1)
	{
		for(int j = i + 1; j < n; j++)
		{
			int b;
			cin >> b;
			a[i][j] = b;
			a[j][i] = b;
		}
	}
	dfs(0);
	cout << ans << endl;
	return 0;
}
