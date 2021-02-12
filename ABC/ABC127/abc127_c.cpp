#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

const int MAX = 100000;
int tab[MAX + 1];
signed main(void)
{
	int n, m, ans, maxi;
	cin >> n >> m;

	ans = maxi = 0;
	rep(i, n) tab[i] = 0;
	rep(i, m)
	{
		int l, r;
		cin >> l >> r;
		--l; --r;
		tab[l] += 1;
		tab[r + 1] += -1;
	}
	rep(i, n) tab[i + 1] += tab[i];
	rep(i, n)
	{
		if (tab[i] == m)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
