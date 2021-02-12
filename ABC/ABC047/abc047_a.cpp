#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c || b == a + c || a == b + c)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
