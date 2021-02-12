#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n;
	cin >> n;
	vector<int> x(n);
	ll sum;
	rep(i, n) cin >> x[i];
	sort(x.begin(), x.end());
	sum = 0;
	rep(i, n)
	{
		sum += (ll)x[i] * (i - (n - 1 - i));
	}
	cout << sum << endl;
	return 0;
}
