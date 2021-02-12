#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int x, y;
	int n;
	cin >> x >> y;
	if ((x + y) % 4 == 0)
	{
		n = (x + y) / 4;
		rep(i, n)
		{
			if (3 * n - 2 * i == x && n + 2 * i == y)
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
