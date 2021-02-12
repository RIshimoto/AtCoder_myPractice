#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, k;
	double s;
	cin >> n >> k;	
	s = (double) (k - 1) * (n - k) * 6 / n / n / n;
	s += (double) (n - (k + 1) + 1) * 3 / n / n / n;
	s += (double) (k - 1) * 3 / n / n / n;
	s += (double) 1 / n / n / n;
	cout << fixed << setprecision(15) << s << endl;
	return 0;
}
