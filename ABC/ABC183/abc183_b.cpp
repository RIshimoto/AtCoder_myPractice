#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<ll, ll>;

signed main(void)
{
	double sx, sy, tx, ty;
	cin >> sx >> sy >> tx >> ty;
	ty = -1 * ty;
	double ans = -1 * sy  * ((tx - sx) / (ty - sy)) + sx;
	cout << fixed <<setprecision(15) << ans << endl;
	return 0;
}
