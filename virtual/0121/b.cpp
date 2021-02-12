#include <bits/stdc++.h>
#define rep(i, n) for(int i= 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int r, g, b, n;
	int cnt, rest;
	cin >> r >> g >> b >> n;
	cnt = 0;
	for (int i = 0; i <= 3000; i++)
	{
		for (int j = 0; j <= 3000; j++)
		{
			rest = n - r * i - g * j;
			if (rest < 0)
				continue;
			if ( rest % b == 0)
				cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
