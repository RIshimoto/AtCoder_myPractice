#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b;
	cin >> a >> b;
	for(int x = a; x >= 0; x--)
	{
		if (x % b == 0)
		{
			cout << x << endl;
			return 0;
		}
	}
	return 0;
}
