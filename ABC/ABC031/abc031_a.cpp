#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int a, d;
	cin >> a >> d;
	if ((a + 1) * d < a * (d + 1))
		cout << a * (d + 1) << endl;
	else
		cout << (a + 1) * d << endl;
	return 0;
}
