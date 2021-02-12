#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, t;
	cin >> a >> b >> t;
	int df = b - a;
	while (b < t)
	{
		b += df;
	}
	cout << b << endl;
	return 0;
}
