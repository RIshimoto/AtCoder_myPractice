#include <bits/stdc++.h>
#define rep(i, n) for(int i = 2; i <= (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	if (n % 2 != 0)
	{
		rep(i, sqrt(n))
		{
			if (n % i == 0)
			{
				cout << "NO" << endl;
				return 0;
			}
		}
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
	return 0;
}
