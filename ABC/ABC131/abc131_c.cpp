#include <bits/stdc++.h>
using namespace std;

long long gcd(long long x, long long y)
{
	if (y == 0) return x;
	return gcd(y, x % y);
}

long long lcm(long long x, long long y)
{
	return x * y / gcd(x, y);
}

signed main(void)
{
	long long a, b, c, d;
	long long ans;
	cin >> a >> b >> c >> d;

	ans = 0;
	ans += b - (b / c + b / d - b / lcm(c, d));
	ans -= (a - 1) - ((a - 1) / c + (a  - 1)/ d - (a - 1)/ lcm(c, d));
	cout << ans << endl;
	return 0;
}
