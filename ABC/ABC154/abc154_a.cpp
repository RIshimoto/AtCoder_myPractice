#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	string s, t, u;
	int a, b;
	cin >> s >> t >> a >> b >> u;

	if (u == s)
		a--;
	if (u == t)
		b--;
	cout << a << " " << b << endl;
	return 0;
}
