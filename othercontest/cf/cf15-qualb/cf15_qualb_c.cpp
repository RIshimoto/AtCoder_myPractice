#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m;
	bool ok;
	cin >> n >> m;
	vector<int> a, b;

	rep(i, n)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	rep(i, m)
	{
		int x;
		cin >> x;
		b.push_back(x);
	}
	sort(a.rbegin(), a.rend());
	sort(b.rbegin(), b.rend());
	ok = true;
	rep(i, m)
	{
		if (b[i] > a[i])
		{
			ok = false;
			break;
		}
	}
	if (ok)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
