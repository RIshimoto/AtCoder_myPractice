#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	int a, b, c, k;
	cin >> a >> b >> c >> k;
	rep(i, k)
	{
		if (a >= b)
			b *= 2;
		else if (b >= c)
			c *= 2;
	}
	if (a < b && b < c)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
