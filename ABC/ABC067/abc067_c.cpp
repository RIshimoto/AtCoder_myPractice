#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main(void)
{
	long long n, sum, ans, x, y;
	cin >> n;
	vector<long long> v(n);

	sum = 0;
	rep(i, n)
	{
		cin >> v[i];
		sum += v[i];
	}
	ans = 100000000000;
	x = y = 0;
	rep(i, n - 1)
	{
		x = sum;
		y += v[i];
		x -= y;
		ans = min(ans, abs(x - y));
	}
	cout << ans << endl;
	return 0;
}
