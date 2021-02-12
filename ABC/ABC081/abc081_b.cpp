#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
	if (y == 0) return x;
	return gcd(y, x % y);
}

signed main(void)
{
	int n, cnt;
	cin >> n;
	int a[n];
	bool ok;
	for (int i = 0; i < n; i++) cin >> a[i];
	
	ok = true;
	cnt = 0;
	while (ok)
	{
		for(int i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0)
				a[i] /= 2;
			else
			{
				ok = false;
				break;
			}
		}
		if (ok)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
