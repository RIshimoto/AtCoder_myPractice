#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int a, n, ans;
string st(1000);
int hashchi(string s)
{
	int sum, k;

	sum = 0;
	k = a;
	rep(i, s.size())
	{
		sum += k * (s[i] - 'a' + 1);
		k *= a;
	}
	return sum;
}

void dfs(int i)
{
	rep(j, 26)
	{
		st[i] = 'a' + j;
		if (i <= 10)
		{
			if (ans == hashchi(st))
			{
				cout << st << endl;
				return 0;
			}
		}
		else
			dfs(i + 1);
	}

signed main(void)
{
	string s;
	cin >> a >> s;
	n = s.size();
	ans = hashchi(s);
	dfs(0);
	return 0;
}
