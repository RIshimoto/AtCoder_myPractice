#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int x, k;
	cin >> x >> k;

	int tmp = 1;
	rep(i, k) tmp *= 10;
	int ans = tmp;
	while(ans <= x) ans += tmp; 
	cout << ans << endl;
	return 0;
}
