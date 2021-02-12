#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int q;
	cin >> q;
	ll a, b, c, d;
	rep(i, q)
	{
		cin >> a >> b >> c;
		d = 100 * a + 10 * b + c;
		if (d % 2 == 0)
		{
			d /= 2;
			if (d / 100 <= a)
				d %= 100;
			else if (d / 100 <= a + b / 10)
			{
				b -= (d - 100 * a) / 10;
				d %= 100;
			}
			if (d / 10 <= b)
				d %= 10;
			if (d <= c)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
		else
			cout << "No" << endl;
	}
	return 0;
}
