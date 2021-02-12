#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0;i < (n); i++)
using namespace std;

signed main(void)
{
	int n, ans;
	cin >> n;
	ans = n / 400;
	if (n % 400 != 0)
		ans++;
	cout << ans << endl;
	return 0;
}
