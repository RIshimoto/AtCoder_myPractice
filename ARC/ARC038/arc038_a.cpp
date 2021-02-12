#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, a;
	cin >> n;
	vector<int> v(n);
	rep(i, n) cin >> v[i];
	sort(v.rbegin(), v.rend());
	a = 0;
	rep(i, n)
	{
		if (i % 2 == 0)
			a += v[i];
	}
	cout << a << endl;
	return 0;
}
