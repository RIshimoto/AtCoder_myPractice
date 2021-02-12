#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long a, b;
	cin >> a >> b;
	if (a * b > 0)
		cout << (long long) b - a << endl;
	else
		cout << (long long) b - a  - 1 << endl;
	return 0;
}
