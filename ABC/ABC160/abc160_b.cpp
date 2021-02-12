#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	long long x;
	long long ans;
	cin >> x;

	ans = 0;
	ans += (x / 500) * 1000;
	x %= 500;
	ans += (x / 5) * 5;
	x %= 5;
	cout << ans << endl;
	return 0;
}
