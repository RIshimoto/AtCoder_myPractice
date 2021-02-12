#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

const int MAX = 1000000;
bool ok[MAX + 10];
signed main(void)
{
	long long n, p, i, x;
	long long ans, cnt;

	cin >> n >> p;
	rep(i, 100000) ok[i] = true;
	ok[0] = ok[1] = false;
	for(int i = 2; i < sqrt(p); i++)
	{
		if (ok[i])
		{
			for(int j = 0; i * (j + 2) <= sqrt(p); j++)
			{
				ok[i * (j + 2)] = false;
			}
		}
	}
	x = p;
	i = 0;
	ans = 1;
	while(sqrt(p) >= i)
	{
		i++;
		if (ok[i])
		{
			cnt = 0;
			while (x % i == 0)
			{
				x /= i;
				cnt++;
			}
			if (cnt >= n)
			{
				ans *= pow(i, (cnt / n));
			}
		}
	}
	if (n == 1)
		ans = p;
	cout << ans << endl;
	return 0;
}
