#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int a, b;
	int diff;
	cin >> a >> b;

	diff = (a + b) / 2;
	if (abs(a - diff) != abs (b - diff))
		cout << "IMPOSSIBLE" << endl;
	else
		cout << diff << endl;
	return 0;
}
