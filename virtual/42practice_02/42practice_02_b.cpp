#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	int alice, bob;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	sort(a.rbegin(), a.rend());	
	alice = bob = 0;
	rep(i, n)
	{
		if (i % 2 == 0)
			alice += a[i];
		else
			bob += a[i];
	}
	cout << alice - bob << endl;
	return 0;
}
