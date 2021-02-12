#include <bits/stdc++.h>
using namespace std;

long long f(long long h)
{
	if (h == 1) return 1;
	return 2 * f(h / 2) + 1;
}

signed main(void)
{
	long long h;
	cin >> h;

	cout << f(h) << endl;
	return 0;
}
