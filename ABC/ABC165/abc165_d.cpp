#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long a, b, n, x, ans;

	cin >> a >> b >> n;
	x = min(n, b - 1);
	ans = a * x / b - a * (x / b);
	cout << ans << endl;
	return 0;
}
