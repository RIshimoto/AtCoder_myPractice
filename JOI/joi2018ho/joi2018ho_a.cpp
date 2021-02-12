#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k, sum;
	cin >> n >> k;
	vector<int> blank(n - 1), a(n);
	k--;
	rep(i, n) cin >> a[i];	
	sum = a[n - 1] - a[0] + 1;
	rep(i, n - 1)
		blank[i] = a[i + 1] - (a[i] + 1);
	sort(blank.rbegin(), blank.rend());
	rep(i, k)
		sum -= blank[i];
	cout << sum << endl;
	return 0;
}
