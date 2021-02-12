#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++) 
using namespace std;

signed main(void)
{
	int n, m;
	bool ok;
	cin >> n >> m;
	string a[n], b[m];
	rep(i, n) cin >> a[i];
	rep(i, m) cin >> b[i];
	rep(k, n - m + 1) rep(l, n - m + 1)
	{
		ok =true;
		rep(i, m) 
		{
			rep(j, m)
			{
				if (a[i + k][j + l] != b[i][j])
					ok = false;
			}
		}
		if (ok)
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
