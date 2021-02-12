#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

long long f(long long x)
{
	long long ans, i = 1;

	while (i * i <= x)
	{
		if (x % i == 0)
			ans = i;
		i++;
	}
	return ans;
}

signed main(void)
{
	long long n, x, y, ans1, ans2;
	cin >> n;
	x = f(n);
	y = n / x;
	ans1 = ans2 = 0;
	while(x)
	{
		ans1++;
		x /= 10;
	}
	while (y)
	{
		ans2++;
		y /= 10;
	}
	cout << max(ans1, ans2) << endl;
	return 0; 
}
