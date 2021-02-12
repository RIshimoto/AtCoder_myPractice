#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int gcd(int x, int y)
{
	if (y == 0) return x;
	return gcd(y, x % y);
}

signed main(void)
{
	P x, y;
	int a, b, ans;
	cin >> x.first >> x.second >> y.first >> y.second;
	ans = 0;
	a = abs(y.first - x.first);
	b = abs(y.second - x.second);
	if (x != y)
		ans = a + b - gcd(a, b);
	cout << ans << endl;
	return 0;
}
