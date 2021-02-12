#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

const double PI = 3.141592653589793238;
signed main(void)
{
	double a, b, x;
	double theta;

	cin >> a >> b >> x;
	if (x / a * 2 / a >= b)
		theta = atan2(b - x / a / a, a / 2) * 180 / PI;
	else
		theta = atan2(b, x / a * 2 / b) * 180 / PI;
	cout << fixed << setprecision(15) << theta << endl;
	return 0;
}
