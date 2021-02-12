#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, k;
	cin >> n >> m >> k;
	int a[n], b[m];
	rep(i, n) cin >> a[i];
	rep(i, m) cin >> b[i];
	if (n == m)
	{
		rep(i, n)
		{
			if (a[i] < b[i])
			{
				cout << 'X' << endl;
				return 0;
			}
			else if (a[i] > b[i])
			{
				cout << 'Y' << endl;
				return 0;
			}
		}
		cout << "Same" << endl;
	}
	else if (n < m)
		cout << 'X' << endl;
	else
		cout << 'Y' << endl;
	return 0;
}
