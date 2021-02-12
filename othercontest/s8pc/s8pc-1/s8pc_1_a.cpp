#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	double k;
	cin >> n;
	if (n == 1)
		k = 18 * 60;
	else
		k = (double) 18 * 60 / (n - 1);
	cout << fixed << setprecision(20) << k << endl;
	return 0;
}
