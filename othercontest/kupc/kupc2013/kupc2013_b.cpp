#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int n, x, m, ans = -1;
int l[10], r[10], s[10], st[10];
vector<int> out(10);

int check(void)
{
	int sum;
	rep(i, m)
	{
		sum = 0;
		for(int j = l[i]; j <= r[i]; j++)
		{
			sum += st[j];
		}
		if (sum != s[i])
			return -1;
	}
	sum = 0;
	rep(i, n)
		sum += st[i];
	return sum;
}

bool dfs(int i)
{
	for(int j = 0; j <= x; j++)
	{
		st[i] = j;
		if (i == n - 1)
		{
			int sum = check();
			if (ans < sum)
			{
				ans = sum;
				rep(i, n) 
					out[i] = st[i];
			}
		}
		else
			dfs(i + 1);
	}
}
signed main(void)
{
	cin >> n >> x >> m;
	rep(i, m)
	{
		cin >> l[i] >> r[i] >> s[i];
		l[i]--; r[i]--;
	}
	dfs(0);
	if (ans == -1)
		cout << ans << endl;
	else
	{
		rep(i, n)
			printf("%d%c", out[i], i == n - 1?'\n':' ');
	}	
	return 0;
}
