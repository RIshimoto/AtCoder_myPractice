#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b;
	int ans;
	cin >> a >> b;
	ans = b / a;
	if (b % a != 0)
		ans++;
	cout << ans << endl;
	return 0;
}
