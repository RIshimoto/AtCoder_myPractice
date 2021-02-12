#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

const double pai = 3.1415926535897932;
signed main(void)
{
	int r, d;
	cin >> r >> d;
	double ans = r * r * pai * 2 * d * pai;
	cout << fixed << setprecision(20) << ans << endl;
	return 0;
}
