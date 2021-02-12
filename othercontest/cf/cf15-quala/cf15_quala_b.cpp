#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	int a[n];
	long long sum;

	rep(i, n) cin >> a[i];
	sum = 0;
	rep(i, n)
	{
		sum += a[i] * pow(2, n - i - 1);
	}
	cout << sum << endl;
	return 0;
}	
