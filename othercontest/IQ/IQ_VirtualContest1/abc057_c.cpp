#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 1; i <= (n); i++)
using namespace std;

long long keta(long long x)
{
	long long cnt = 0;
	while (x)
	{
		cnt++;
		x /= 10;
	}
	return cnt;
}

long long f(long long a, long long b)
{
	return max(keta(a), keta(b));
}

signed main(void)
{
	long long n, a, b, ans;

	cin >> n;
	ans = 1e9;
	rep(i, sqrt(n))
	{
		if (n % i != 0) continue;
		a = i;
		b = n / i;
		ans = min(f(a, b), ans);
	}
	cout << ans << endl;
	return 0;
}
