#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n;
	cin >> n;
	long long f[n];
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= n; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	cout << f[n] << endl;
	return 0;
}
