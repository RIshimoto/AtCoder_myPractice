#include <bits/stdc++.h>
#define rep(i, n) for(int i = 1; i <= (n); i++)
using namespace std;

signed main(void)
{
	int n, a, b;
	int df, ans;

	cin >> n;
	ans = df = 1e9;
	rep(i, sqrt(n))
	{
		a = i; 
		b = n / i;
		df = min(df, abs(a - b));
		ans = min(ans, n - a * b + df); 
	}
	cout << ans << endl;
	return 0;
}
