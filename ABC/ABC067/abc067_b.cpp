#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k, sum;
	cin >> n >> k;
	vector<int> l(n);

	sum = 0;
	rep(i, n) cin >> l[i];
	sort(l.rbegin(), l.rend());
	rep(i, k)
		sum += l[i];
	cout << sum << endl;
	return 0;
}
