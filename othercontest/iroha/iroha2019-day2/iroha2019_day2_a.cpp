#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int dp[3010][3010];
signed main(void)
{
	string s, t;
	int ans, slen, tlen;

	cin >> s >> t;
	s = " " + s;
	t = " " + t;
	slen = s.size(); 
	tlen = t.size();
	vector<vector<int>> dp(slen + 1, vector<int>(tlen + 1, 0));
	for(int i = 1; i <= slen; i++)
	{
		for(int j = 1; j <= tlen; j++)
		{
			if (s[i] == t[j])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	ans = dp[slen][tlen];
	cout << ans << endl;
	return 0;
}
