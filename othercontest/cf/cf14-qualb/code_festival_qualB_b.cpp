#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k;
	cin >> n >> k;
	rep(i, n)
	{
		int a;
		cin >> a;
		k -= a;
		if (k <= 0)
		{
			cout << i + 1 << endl;
			return 0;
		}
	}
	return 0;
}
