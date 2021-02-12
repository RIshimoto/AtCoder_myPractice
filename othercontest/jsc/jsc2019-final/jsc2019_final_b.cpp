#include <bits/stdc++.h>
#define rng(i, a, b) for(int i = int(a); i < int(b); i++)
#define rep(i, n) for(int i = 0; i < (n); i++)
#define gnr(i, a, b) for(int i = int(b) - 1; i >= int(a); i--)
#define per(i, b) gnr(i, 0, b) 
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	vector<string> a(n), b(n);
	vector<vector<char>> tmp(n, vector<char>(n, '0'));

	rep(i, n) cin >> a[i];
	rep(i, n) cin >> b[i];
	rep(i, n)
	{
		rep(j, n)
		{
			if (a[i][j] == '1')
			{
				rep(k, n)
				{
					if (b[i][k] == '1')
						tmp[j][k] = '1';
				}
			}
		}
	}
	// check
	bool ok = true;

	// output
	if (ok)
	{
		rep(i, n) 
		{
			rep(j, n) cout << tmp[i][j];
			cout << endl;
		}
	}
	else
		cout << -1 << endl;
	return 0;
}
