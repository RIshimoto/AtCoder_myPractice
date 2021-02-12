#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	rep(i, n)
		printf("%d%c", a[i], i==n-1?'\n':',');
	return 0;
}
