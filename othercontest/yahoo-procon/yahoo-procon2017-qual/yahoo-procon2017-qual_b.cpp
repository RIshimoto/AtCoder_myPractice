#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k;
	long long sum;
	cin >> n >> k;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	sort(a.begin(), a.end());
	sum = 0;
	rep(i, k) sum += a[i] + i;
	cout << sum << endl;
	return 0;
}
