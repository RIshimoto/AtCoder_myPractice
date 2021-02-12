#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, c;
	double ans;
	cin >> a >> b >> c;
	ans = (double)c * b / a;
	cout << fixed << setprecision(20) << ans << endl;
	return 0;
}
