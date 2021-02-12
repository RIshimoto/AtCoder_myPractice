#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long sum;
	int n;
	cin >> n;
	vector<long long> a(n, 0), x(n, 0);

	sum = 0;
	rep(i, n)
	{
		cin >> a[i];
		sum += a[i];
	}
	x[0] = sum;
	for(int i = 1; i < n; i+=2)
		x[0] -=  2 * a[i]; 
	rep(i, n - 1)
	{
		x[i + 1] = 2 * a[i] - x[i];
	}
	rep(i, n)
		printf("%d%c", x[i], i==n-1?'\n':' ');
	return 0;
}
