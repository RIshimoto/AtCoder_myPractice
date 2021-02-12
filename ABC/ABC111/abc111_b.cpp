#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	int tmp, bef;
	bool ok;
	rep(i, 200)
	{
		tmp = n + i;
		ok = true;
		bef = tmp % 10;
		while(tmp / 10)
		{
			tmp /= 10;
			if (bef != tmp % 10)
				ok = false;
			bef = tmp % 10;
		}
		if (ok)
		{
			cout << n + i << endl;
			break;
		}
	}
	return 0;
}
