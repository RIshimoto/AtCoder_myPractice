#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int a, b, c;
	cin >> a >> b >> c;

	if ((ll)c - a - b > 0 && (ll)4 * a * b < (ll)(c - a - b) * (c - a - b))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
