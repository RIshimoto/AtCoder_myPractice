#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define MAX 10000
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, b, c;
	ll sum;
	cin >> n >> b >> c;
	vector<int> a(n); 
	rep(i, n) cin >> a[i];
	sort(a.rbegin(), a.rend());
	sum = 0;
	rep(i, n)
	{
		sum += a[i] * min(c, b);
		c -= b;
		if (c < 0)
			break;
	}
	cout << sum << endl;
	return 0;
}
