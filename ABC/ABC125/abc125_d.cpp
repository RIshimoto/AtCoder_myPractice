#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, mini;
	cin >> n;
	int a[n];
	long long cnt, sum;

	mini = 1e9;
	sum = cnt = 0;
	rep(i, n)
	{
		cin >> a[i];
		sum += abs(a[i]);
		mini = min(abs(a[i]), mini);
		if (a[i] < 0)
			cnt++;
	}
	if (cnt % 2 == 0)
		cout << sum << endl;
	else
		cout << sum - 2 * mini << endl;
	return 0;
}
