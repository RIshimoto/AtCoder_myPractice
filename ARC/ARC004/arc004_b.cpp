#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, mx;
	long long sum, max_a, min_a;
	cin >> n;
	int d[n];
	sum = mx = 0;
	rep(i, n) 
	{
		cin >> d[i];
		sum += d[i];
		mx = max(mx, d[i]);
	}
	max_a = sum;
	min_a = max_a - mx;
	if (min_a >= mx)
		min_a = 0;
	else
		min_a = mx - min_a;
	cout << max_a << endl << min_a << endl;
	return 0;
}
