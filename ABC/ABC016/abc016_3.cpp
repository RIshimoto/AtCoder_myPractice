#include <bits/stdc++.h>
#define INF 100
#define rep(i, n) for(int i = 0; i < (n); i++)

using namespace std;
int  main(void)
{
	int n,m; cin >> n >> m;
	int tab[n][n]; rep(i, n) rep(j, n) tab[i][j] = INF;
	rep(i, m)
	{
		int a,b;
		cin >> a >> b;
		a--;
		b--;
		tab[a][b] = 1;
		tab[b][a] = 1;
	}
	rep(i, n) tab[i][i] = 0;
	rep(k, n)
		rep(i, n)
			rep(j, n)
				tab[i][j] = min(tab[i][j], tab[i][k] + tab[k][j]);
	int cnt;
	rep(i, n)
	{
		cnt = 0;
		rep(j, n)
		 	if (tab[i][j] == 2)
				cnt++;
		cout << cnt << endl;
	}
	return 0;
}
