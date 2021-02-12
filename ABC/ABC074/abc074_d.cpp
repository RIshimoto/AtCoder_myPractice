#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n;
	cin >> n;
	int a[n][n];
	rep(i, n) rep(j, n) cin >> a[i][j];
	rep(k, n) rep(i, n) rep(j, n) a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
	rep(i, n) {rep(j, n) cout << a[i][j] << " "; cout << endl;}
	return 0;
}
