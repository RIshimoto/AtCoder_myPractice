#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a * d < b * c)
		cout << "TAKAHASHI" << endl;
	else if (a * d > b * c)
		cout << "AOKI" << endl;
	else
		cout << "DRAW" << endl;
	return 0;
}
