#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, c, s;
	cin >> a >> b >> c >> s;
	s -= a + b + c;
	if (0 <= s && s <= 3)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
