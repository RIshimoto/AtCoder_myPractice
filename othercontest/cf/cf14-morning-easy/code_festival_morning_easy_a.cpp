#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	long long a[n];
	rep(i, n) cin >> a[i];
	cout << fixed << setprecision(20);
	cout << (double)(a[n - 1] - a[0]) / (n - 1) << endl;
	return 0;
}
