#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	double h, b, ans;
	cin >> h >> b;
	ans = b * h * h / 10000; 
	cout << fixed << setprecision(20) << ans << endl;
	return 0;
}
