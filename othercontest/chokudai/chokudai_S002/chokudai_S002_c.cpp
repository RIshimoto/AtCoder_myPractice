#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	long long a, b, sum;
	cin >> n;
	sum = 0;
	rep(i, n)
	{
		cin >> a >> b;
		sum = max(a + b, sum);
	}
	cout << sum << endl;
	return 0;
}
