#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m;
	cin >> n >> m;
	string b[n];
	vector<vector<int>> a(n, vector<int>(m, 0));

	rep(i, n) cin >> b[i];
	rep(i, n) rep(j, m - 1)
	{
		if (b[i][j] != '0')
		{
			int tmp = b[i][j] - '0';
			a[i + 1][j] = tmp;
			b[i][j] -= tmp;
			b[i + 1][j - 1] -= tmp;
			b[i + 1][j + 1] -= tmp;
			b[i + 2][j] -= tmp;
		}
	}
	rep(i, n) 
	{
		rep(j, m)
			cout << a[i][j]; 
		cout << endl;
	}
	return 0;
}
