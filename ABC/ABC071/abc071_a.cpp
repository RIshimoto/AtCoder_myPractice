#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int x, a, b;
	cin >> x >> a >> b;
	if (abs(x - a) > abs(x - b))
		cout << "B" << endl;
	else
		cout << "A" << endl;
	return 0;
}
