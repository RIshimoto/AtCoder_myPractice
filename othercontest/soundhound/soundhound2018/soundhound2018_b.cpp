#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, l, r;
	cin >> n >> l >> r;
	int a[n];
	rep(i, n)
	{
		cin >> a[i];
		if (a[i] <= l)
			a[i] = l;
		else if (a[i] >= r)
			a[i] = r;
	}
	rep(i, n)
		printf( "%d%c", a[i], i == n - 1?'\n':' ');
	return 0;
}
