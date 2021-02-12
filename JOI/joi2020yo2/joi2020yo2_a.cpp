#include <bits/stdc++.h>
#define rep(i, n) for(int i= 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, ans, cnt;
	cin >> n;
	char s[n][n], t[n][n], tokei1[n][n], tokei2[n][n], tokei3[n][n];

	rep(i, n) rep(j, n) cin >> s[i][j]; 
	rep(i, n) rep(j, n) cin >> t[i][j]; 
	rep(i, n) rep(j, n) tokei1[j][n - i - 1] = t[i][j];
	rep(i, n) rep(j, n) tokei2[j][n - i - 1] = tokei1[i][j];
	rep(i, n) rep(j, n) tokei3[j][n - i - 1] = tokei2[i][j];
	ans = 1e9;
	cnt = 0;
	rep(i, n) rep(j, n) 
	{
		if (s[i][j] != t[i][j])
			cnt++;
	}
	ans = min(ans, cnt);
	cnt = 1;
	rep(i, n) rep(j, n) 
	{
		if (s[i][j] != tokei1[i][j])
			cnt++;
	}
	ans = min(ans, cnt);
	cnt = 2;
	rep(i, n) rep(j, n) 
	{
		if (s[i][j] != tokei2[i][j])
			cnt++;
	}
	ans = min(ans, cnt);
	cnt = 1;
	rep(i, n) rep(j, n) 
	{
		if (s[i][j] != tokei3[i][j])
			cnt++;
	}
	ans = min(ans, cnt);
	cout << ans << endl;
	return 0;
}
