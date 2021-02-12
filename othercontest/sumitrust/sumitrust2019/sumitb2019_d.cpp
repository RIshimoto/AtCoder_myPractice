#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int n;
long long ans;
string s, st;

void solve(void)
{
	int j = 0;
	bool ok;
	set<string> ss;

	rep(i, 3)
	{
		ok = false;
		while (j < n)
		{
			if (s[j] == st[i])
			{
				ok = true;
				j++;
				break;
			}
			j++;
		}
		if (!ok)
			return;
	}
	if (ok)
		ans++;
}

void dfs(int i)
{
	int j = 0;
	while(j < 10)
	{
		st[i] = j + '0';
		if (i == 2)
			solve();
		else
			dfs(i + 1);
		j++;
	}
}

signed main(void)
{
	ans = 0;
	st.resize(3);
	cin >> n >> s;
	dfs(0);
	cout << ans << endl;
	return 0;
}
