#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

long long nCr(long long n, long long r)
{
	long long x = 1;
	long long y  = 1;
	for (long long i = 1; i <= r; ++i )
	{
		x *= (n-i+1);
		y  *= i;
		if (x % y == 0)
		{
			x /= y;
			y = 1;
		}
	}
	return x / y;
}

signed main(void)
{
	int L;
	ll ans;

	cin >> L;
	L--;
	ans = 1;
	ans = nCr(L, 11);
	cout << ans << endl;
	return 0;
}
