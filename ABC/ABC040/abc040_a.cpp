#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n, x;
	cin >> n >> x;
	if (x > n - x)
		cout << n - x << endl;
	else
		cout << x - 1 << endl;
	return 0;
}
