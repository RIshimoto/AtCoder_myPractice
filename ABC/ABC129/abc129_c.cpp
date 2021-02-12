#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i <= (n); i++)
using namespace std;

const long long mod=1000000007;

int main(void)
{
  int n,m; cin >> n >> m;
  int broken[n + 1]; rep(i, n) broken[i] = 0;
  long long dp[n + 1]; rep(i, n) dp[i] = 0;
  rep(i,m - 1) {int a; cin >> a; broken[a] = 1;}

  dp[0] = 1;
  if (!broken[1]) dp[1] = 1;
  for(int i = 2; i <= n; i++)
  {
	if (!broken[i - 2])
		dp[i] += dp[i - 2];
	if (!broken[i - 1])
  		dp[i] += dp[i - 1];
	dp[i] %= mod;
  }
  cout << dp[n] << endl;
  return (0);
}
