#include<bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;
long long dp[100010]; 

int main(void)
{	
	dp[0] = 0;
	for (int n = 1; n <= 100000; n++)
	{
		dp[n]= INF;
		int power = 1;
		while (power <= n)
		{
			dp[n] = min(dp[n], dp[n-power]+1);
			power *= 6;
		}
		power = 1;
		while (power <= n)
		{
			dp[n] = min(dp[n], dp[n - power] + 1);
			power *= 9;
		}
	}
	int n; cin >> n;
	cout << dp[n] <<endl;
	return 0;
}
