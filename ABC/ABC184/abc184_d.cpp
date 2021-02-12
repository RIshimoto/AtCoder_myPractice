#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<ll, ll>;

signed main(void)
{
	double a, b, c;
	double ans;
	cin >> a >> b >> c;
	ans = (100 - a) * a / (a + b + c)
		+ (100 - b) * b / (a + b + c)
		+ (100 - c) * c / (a + b + c);
	cout << fixed << setprecision(20) << ans << endl;
	return 0;
}
