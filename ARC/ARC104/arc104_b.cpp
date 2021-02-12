#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll=long long;
using P=pair<ll, ll>;
#define A 0
#define G 1 
#define C 2
#define T 3 

signed main(void)
{
	string s;
	int n;
	ll ans;

	cin >> n >> s;
	int cnts[4][n + 1];
	rep(i, 4) for (int j = 0; j <= n; j++)
		cnts[i][j] = 0;
	for (int i = 1; i <= n; i++)
	{
		if (s[i - 1] == 'A')
			cnts[A][i]++;
		if (s[i - 1] == 'G')
			cnts[G][i]++;
		if (s[i - 1] == 'C')
			cnts[C][i]++;
		if (s[i - 1] == 'T')
			cnts[T][i]++;
		for (int k = A; k <= T; k++)
			cnts[k][i] += cnts[k][i - 1];
	}
	ans = 0;
	for (int l = 2; l <= n; l += 2)
	{
		for (int start = 0; start <= n - l; start++)
		{
			int a_cnt, g_cnt, c_cnt, t_cnt;
			a_cnt = g_cnt = c_cnt = t_cnt = 0;
			a_cnt = cnts[A][start + l] - cnts[A][start];
			g_cnt = cnts[G][start + l] - cnts[G][start];
			c_cnt = cnts[C][start + l] - cnts[C][start];
			t_cnt = cnts[T][start + l] - cnts[T][start];
			if (a_cnt == t_cnt && g_cnt == c_cnt)
				ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
