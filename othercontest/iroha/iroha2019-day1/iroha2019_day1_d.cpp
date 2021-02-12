#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, x, y;
	cin >> n >> x >> y;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	sort(a.rbegin(), a.rend());
	rep(i, n)
	{
		if (i % 2 == 0)
			x += a[i];
		else
			y += a[i];
	}
	if (x > y)
		cout << "Takahashi" << endl;
	else if (x < y)
		cout << "Aoki" << endl;
	else
		cout << "Draw" << endl;
	return 0;
}
