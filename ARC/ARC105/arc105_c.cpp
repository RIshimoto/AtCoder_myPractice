#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll=long long;
using P=pair<ll, ll>;

signed main(void)
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	bool ok;
	ok = false;
	if (a == b + c + d)
		ok = true;
	if (a == b + c + d)
		ok = true;
	if (b == a + c + d)
		ok = true;
	if (c == a + b + d)
		ok = true;
	if (d == a + b + c)
		ok = true;
	if (a + b == c + d)
		ok = true;
	if (a + c == b + d)
		ok = true;
	if (a + d == b + c)
		ok = true;
	if (ok)
	cout << "Yes" << endl;
	else
	cout << "No" << endl;
	return 0;
}
