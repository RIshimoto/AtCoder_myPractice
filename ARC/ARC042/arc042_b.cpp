#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int x, y, n;
	cin >> x >> y >> n;
	int a[n], b[n];
	rep(i, n) cin >> a[i] >> b[i];

	double ans = 1000000000000;
	rep(i, n)
	{
		pair<double, double> A, B, C;
		A.first = a[i];	A.second = b[i];	
		B.first = a[(i + 1) % n]; B.second = b[(i + 1) % n];	
		C.first = x; C.second = y;

		B.first -= A.first;
		B.second = A.second - B.second;
		C.first -= A.first;
		C.second -= A.second;

		double d;
		d = abs(B.second * C.first + B.first * C.second) /\
			sqrtl(B.first * B.first + B.second * B.second);
		if (ans > d)
			ans = d;	
	}
	cout << fixed << setprecision(20) << ans << endl;
	return 0;
}
