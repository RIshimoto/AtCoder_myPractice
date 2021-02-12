#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

const double PI = 3.141592653589793;
signed main(void)
{
	long double a, b, h, m;
	long double r_m, r_h, dx, dy, A_x, A_y, B_x, B_y, ans;

	cin >> a >> b >> h >> m;
	r_h = (60 * h + m) / 720 * 2 * PI; 
	r_m = m / 60 * 2 * PI;
	A_x = a * cosl(r_h);
	A_y = a * sinl(r_h);
	B_x = b * cosl(r_m);
	B_y = b * sinl(r_m);
	ans = sqrtl((long double)(A_x - B_x) * (A_x - B_x) +\
			(long double)(A_y - B_y) * (A_y - B_y));
	cout << fixed << setprecision(20) << ans << endl;
	return 0;
}
