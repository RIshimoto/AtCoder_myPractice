#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int a, ans;
	cin >> a;
	ans = 0;
	for(int i = a - 1; i > 0; i--)
	{
		ans = max(ans, i * (a - i));
	}
	cout << ans << endl;
	return 0;
}
