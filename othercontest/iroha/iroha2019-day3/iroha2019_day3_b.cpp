#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

char c[3];
bool used[8];
void dfs(int j)
{
	rep(i, 8)
	{
		if (used[i]) continue;
		c[j] = i + '0';
		if (j == 2)
		{
			rep(i, 3) cout << c[i];
			cout << endl;
			return;
		}
		else
		{
			used[i] = true;
			dfs(j + 1); 
			used[i] = false;
		}
	}
}


signed main(void)
{
	dfs(0);
	return 0;
}
