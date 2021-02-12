#include <bits/stdc++.h>
#define INF 1000000;
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int n,m; cin >> n >> m;
	int dp[n][n]; rep(i,n)rep(j,n) dp[i][j] = INF;
	rep(i,m)
	{
		int a, b, t;
		cin >> a >> b >> t;
		a--;
		b--;
		dp[a][b] = t;
		dp[b][a] = t;
	}
	rep(i,n) dp[i][i] = 0;

	//
	//Worshall Floyd method
	//https://qiita.com/okaryo/items/8e6cd73f8a676b7a5d75
	//
	rep(k, n) // via 
		rep(i, n) // from
			rep(j, n) // to  
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);

	int min;
	int i_max;

	min = INF;
	rep(i,n)
	{
		i_max = 0;
		rep(j,n) 
		{
			if (i_max < dp[i][j])
				i_max = dp[i][j];
		}
		if (min > i_max)
			min = i_max;
	}
	cout << min << endl;
	return 0;
}
