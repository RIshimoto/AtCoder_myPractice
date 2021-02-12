#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, w1, w2;
	double l;
	cin >> n >> w1 >> w2 >> l;
	rep(i, n)
	{
		l = (double)l / w1 * w2;
	}
	cout << fixed << setprecision(20) << l << endl;
	return 0;
}
