#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n);  i++)
using namespace std;
typedef long long ll;
using P = pair<int, int>;

signed main(void)
{
	int n, x;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	x = a[0];
	for (int i = 1; i < n; i++)
		x ^= a[i];
	rep(i, n) printf("%d%c", x ^ a[i], i == n - 1?'\n':' ');
	return 0;
}
