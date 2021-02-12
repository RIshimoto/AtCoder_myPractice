#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	int c[m];
	rep(i, m) cin >> c[i];
	rep(i, m)
	{
		if (n <= a) n += b;
		if (n < c[i])
		{
			cout << i + 1 << endl;
			return 0;
		}
		n -= c[i];	
	}
	cout << "complete" << endl;
	return 0;
}
