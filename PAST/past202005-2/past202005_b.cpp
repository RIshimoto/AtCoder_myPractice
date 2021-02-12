#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, m, q;
	cin >> n >> m >> q;
	vector<int> p(m, n);
	vector<vector<bool>> solv(n, vector<bool>(m, false));
	rep(i, q)
	{
		int a, b, c;
		cin >> a;
		if (a == 1)
		{
			cin >> b;
			b--;
			ll sum = 0;
			rep(i, m)
			{
				if (solv[b][i])
					sum += p[i];
			}
			cout << sum << endl;
		}
		else if (a == 2)
		{
			cin >> b >> c;
			b--; c--;
			solv[b][c] = true;
			p[c]--;
		}
	}
	return 0;
}
