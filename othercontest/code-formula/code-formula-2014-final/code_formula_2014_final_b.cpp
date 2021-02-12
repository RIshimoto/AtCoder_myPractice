#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, ans;
	cin >> n;
	ans = n / 2;
	if (n % 2 != 0)
		ans += 3;
	cout << ans << endl;
	return 0;
}
