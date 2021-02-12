#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m;
	cin >> n;
	int a[n];
	int x[n], y[n];
	double dis[n][n];
	rep(i, n) a[i] = i;
	rep(i, n) cin >> x[i] >> y[i];
	rep(i, n) rep(j, n) dis[i][j] = 0;
	rep(i, n) 
	{
		rep(j, n)
		{
			dis[i][j] += (x[i] - x[j]) * (x[i] - x[j]);
			dis[i][j] += (y[i] - y[j]) * (y[i] - y[j]);
			dis[i][j] = sqrt(dis[i][j]);
		}
	}
	double sum = 0;
	m = 0;
	do{
		rep(i, n - 1) sum += dis[a[i]][a[i + 1]];
		m++;
	}while(next_permutation(a, a + n));
	cout << fixed << setprecision(15) << sum / m << endl;
	return 0;
}
