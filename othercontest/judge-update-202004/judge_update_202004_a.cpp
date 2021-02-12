#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int s, l, r;
	cin >> s >> l >> r;
	if (s >= l && s <= r)
		cout << s << endl;
	else if (s <= l)
		cout << l << endl;
	else if (s >= r)
		cout << r << endl;
	return 0;
}
