#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, x, y;
	cin >> n;
	string s[n];
	rep(i, n) cin >> s[i];
	x = y = 0;
	rep(i, n)
	{
		rep(j, n)
		{
			if (s[j][i] == 'X')
				break;
			x++;
		}
		for (int j = n - 1; j >= 0; j--)
		{
			if (s[j][i] == 'Y')
				break;
			y++;
		}
	}
	if (x == y)
		cout << "Impossible" << endl;
	else if (x < y)
		cout << "Y" << endl;
	else if (x > y)
		cout << "X" << endl;
	return 0;
}
