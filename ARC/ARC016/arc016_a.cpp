#include <bits/stdc++.h>
#define rep(i, n) for(int i = 1; i <= (n); i++)
using namespace std;

signed main(void)
{
	int n, m;
	cin >> n >> m;
	rep(i, n)
	{
		if (i != m)
		{
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}
