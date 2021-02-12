#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int gcd(int x, int y)
{
	if (y == 0) return x;
	return gcd(y, x % y);
}
signed main(void)
{
	int a, b, k;
	int g, j;
	cin >> a >> b >> k;
	g = gcd(a, b);
	j = 0;
	for (int i = g; i >= 1; i--)
	{
		if (g % i == 0)
		{
			j++;
			if (j == k)
			{
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
