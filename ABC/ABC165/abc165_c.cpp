#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int n, m, q;
vector<int> a, b, c, d, st;
int ans;

void dfs(int i)
{
	int j = 1; 
	while (j <= m)
	{
		if (i == 0 || st[i - 1] <= j)
		{
			st[i] = j;
			if (i == n - 1)
			{
				int sum = 0;
				rep(i, q)
				{
					if (st[b[i]] - st[a[i]] ==  c[i])
						sum += d[i];
				}
				ans = max(ans, sum);
			}
			else
				dfs(i + 1);
		}
		j++;
	}
}

signed main(void)
{
	cin >> n >> m >> q;
	a = b = c = d = vector<int>(q);
	st = vector<int>(n);
	rep(i, q) 
	{
		cin >> a[i] >> b[i] >> c[i] >> d[i];
		a[i]--; b[i]--;
	}
	ans = 0;
	dfs(0);
	cout << ans << endl;
	return 0;
}
