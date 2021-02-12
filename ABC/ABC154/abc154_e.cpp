#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i; i < (n); i++)
#define SIZE(a) int((a).size())

typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<vvll> vvvll;

vvvll dp;
signed main(void)
{
	string s;
	ll K;
	cin >> s >> K;

	ll digit = SIZE(s);
	
	// 1以上N以下の整数であって、0でない数字がちょうどK個あるようなもの個数dp
	// dp[i][j][k] i:i桁目、j:j個の非0を使う、k:未満フラグ(1ならn未満である)
	dp[0][0][0] = 1;
	rep(i, digit) rep(j, 4) rep(k, 2)
	{
		ll nd = s[i] - '0';
		rep(d, 10)
		{
			ll ni = i + 1, nj = j, nk = k;
			if (d != 0) nj++;
			if (nj > K) continue;
			if (k == 0)
			{
				if (d > nd) continue;
				if (d < nd) nk = 1;
			}
			dp[ni][nj][nk] += dp[i][j][k];
		}
	}
	ll ans = dp[digit][K][0] + dp[digit][K][1];
	cout << ans << endl;
	return 0;
}
